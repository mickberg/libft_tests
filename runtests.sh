# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    runtests.sh                                        :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mberglun <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/02 18:26:21 by mberglun          #+#    #+#              #
#    Updated: 2019/11/13 15:00:14 by mikaelber        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

root="$(dirname "$0")"
source "$root/vars.sh"

found=0

normal_test() {
	fls=("${!2}")
	for file in ${fls[@]}
	do
		if [[ "$file" = "$1" && -f "$root/tests/$file".out ]]
		then
			"$root/tests/$file".out
			found=1
		fi
	done
}

if [[ "$1" = "part1" ]]
then
	found=1
	for file in ${PART1[@]}
	do
		if [ -f "$root/tests/$file".out ]
		then
			"$root/tests/$file".out
		else
			echo "No test found for " $file
		fi
	done
elif [[ "$1" = "part2" ]]
then
	found=1
	for file in ${PART2[@]}
	do
		if [ -f "$root/tests/$file".out ]
		then
			"$root/tests/$file".out
		else
			echo "No test found for " $file
		fi
	done
elif [[ "$1" = "partb" ]]
then
	found=1
	for file in ${PARTB[@]}
	do
		if [ -f "$root/tests/$file".out ]
		then
			"$root/tests/$file".out
		else
			echo "No test found for " $file
		fi
	done
else
	normal_test $1 PART1[@]
	normal_test $1 PART2[@]
	normal_test $1 PARTB[@]
fi

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
