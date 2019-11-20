/**
 * File              : ft_memcpy.c
 * Author            : Mikael Berglund <mikael.berglund2@gmail.com>
 * Date              : 29.10.2019
 * Last Modified Date: 29.10.2019
 * Last Modified By  : Mikael Berglund <mikael.berglund2@gmail.com>
 */

#include "testlib.h"

int	main(void)
{
	char	*name = "ft_memcpy";

	int		exp[10] = {10,20,30,40,50,60,70,80,90,100};
	int		test[10];

	ft_memcpy(test, exp, sizeof(exp));
	test_mem(exp, test, sizeof(exp), name, "int arr");

	char	*exp1 = ft_strnew(15);
	char	*test1 = ft_strnew(15);

	memset(exp1, 'f', 15);
	memset(test1, 'f', 15);
	memcpy(exp1+3, "kalle anka", 10);
	ft_memcpy(test1+3, "kalle anka", 10);
	test_mem(exp1, test1, 16, name, "test2");

	memcpy(exp1, exp1+5, 5);
	ft_memcpy(test1, test1+5, 5);
	test_mem(exp1, test1, 16, name, "test3");

	return (0);
}

