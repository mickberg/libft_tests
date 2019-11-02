# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    runtests.sh                                        :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mberglun <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/02 18:26:21 by mberglun          #+#    #+#              #
#    Updated: 2019/11/02 20:31:05 by mikaelber        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

my_dir="$(dirname "$0")"
source "$my_dir/variables.sh"

found=0

if [ -z "$1" ]
then
	found=1
	for file in ${FILES[@]}
	do
		if [ -f ./tests/$file ]
		then
			./tests/$file
		else
			echo "No test for " $file
		fi
	done
fi

for	file in ${FILES[@]}
do
	if [[ "$file" = "$1".out && -f ./tests/$file ]]
	then
		./tests/$file
		found=1
		break
	fi
done

if [ $found -eq 0 ]
then
	echo "No test found for " $1
fi
