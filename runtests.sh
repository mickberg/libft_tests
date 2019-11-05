# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    runtests.sh                                        :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mberglun <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/02 18:26:21 by mberglun          #+#    #+#              #
#    Updated: 2019/11/05 12:58:06 by mikaelber        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

root="$(dirname "$0")"
source "$root/variables.sh"

found=0

if [ -z "$1" ]
then
	found=1
	for file in ${FILES[@]}
	do
		if [ -f $root/tests/$file ]
		then
			$root/tests/$file
		else
			echo "No test for " $file
		fi
	done
fi

for	file in ${FILES[@]}
do
	if [[ "$file" = "$1".out && -f $root/tests/$file ]]
	then
		$root/tests/$file
		found=1
		break
	fi
done

for	file in ${OFILES[@]}
do
	if [[ "$file" = "$1".out && -f $root/tests/$file ]]
	then
		# Create dirs
		if [ ! -d $root/outputs/$1 ]
		then
			mkdir -p $root/outputs/$1
		fi

		i=1;
		j=-1;
		while [ $i -ne 0 ]
		do
			res=$($root/tests/$file "$i" | cat -t)
			if [ -z "$res" ]
			then
				i=0
				break
			else
				echo "$res" > $root/outputs/$1/usr_out$i
				exp=$($root/tests/$file "$j" | cat -t)
				echo "$exp" > $root/outputs/$1/exp_out$i

				diff=$( diff $root/outputs/$1/usr_out$i $root/outputs/$1/exp_out$i )
				if [ ! -z "$diff" ]
				then
					echo "Test $i failed\n - Expected [$exp] got [$res]\n"
				fi
				i=$((i+1))
				j=$((j-1))
			fi
		done

		found=1
		break
	fi
done

if [ $found -eq 0 ]
then
	echo "No test found for " $1
fi
