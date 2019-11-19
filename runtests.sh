# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    runtests.sh                                        :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mberglun <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/02 18:26:21 by mberglun          #+#    #+#              #
#    Updated: 2019/11/19 18:40:17 by mikaelber        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

root="$(dirname "$0")"
source "$root/vars.sh"

found=0

normal_test() {
	fls=("${!2}")
	for file in ${fls[@]}
	do
		if [[ ( "$file" = "$1" || -z "$1" ) && -f "$root/tests/$file".out ]]
		then
			"$root/tests/$file".out
			found=1
		fi
	done
}

output_test()
{
	fls=("${!2}")
	for file in ${fls[@]}
	do
		if [[ ( "$file" = "$1".out || -z "$1" ) && -f "$root/tests/$file".out ]]
		then
			# Create dirs
			if [ ! -d $root/outputs/$file ]
			then
				mkdir -p $root/outputs/$file
			fi

			i=1;
			j=-1;
			while [ $i -ne 0 ]
			do
				res=$("$root/tests/$file".out "$i" | cat -t)
				if [ -z "$res" ]
				then
					i=0
					break
				else
					echo "$res" > $root/outputs/$file/usr_out$i

					# expected
					exp=$("$root/tests/$file".out "$j" | cat -t)
					if [[ ! "$exp" = "N/A" ]]
					then
						echo "$exp" > $root/outputs/$file/exp_out$i
					fi

					# diff check
					diff=$( diff $root/outputs/$file/exp_out$i $root/outputs/$file/usr_out$i )
					if [ ! -z "$diff" ]
					then
						expF=$( cat -e $root/outputs/$file/exp_out$i )
						usrF=$( cat -e $root/outputs/$file/usr_out$i )
						echo "Failed [$file] [test$i] failed\n - Expected [$expF] got [$usrF]\n"
					else
						echo "Passed [$file] [test$i]"
					fi
					i=$((i+1))
					j=$((j-1))
				fi
			done
		else
			echo "No test found for " $file
		fi
	done
}

if [[ "$1" = "part1" ]]
then
	found=1
	normal_test "" PART1[@]
elif [[ "$1" = "part2" ]]
then
	found=1
	normal_test "" PART2[@]
elif [[ "$1" = "partb" ]]
then
	found=1
	normal_test "" PARTB[@]
elif [[ "$1" = "outs" ]]
then
	found=1
	output_test "" OUTPUT[@]
else
	# search for specific test
	normal_test $1 PART1[@]
	normal_test $1 PART2[@]
	normal_test $1 PARTB[@]
	output_test $1 OUTPUT[@]
fi

if [ $found -eq 0 ]
then
	echo "No test found for " $1
fi
