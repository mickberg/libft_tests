/**
 * File              : ft_memmove.c
 * Author            : Mikael Berglund <mikael.berglund2@gmail.com>
 * Date              : 29.10.2019
 * Last Modified Date: 29.10.2019
 * Last Modified By  : Mikael Berglund <mikael.berglund2@gmail.com>
 */

#include "testlib.h"

int	main(void)
{

	char	*name = "ft_memmove";

	char	*exp;
	char	*test;
	size_t	size;

	exp = strdup("kalle anka pelle");
	test = strdup("kalle anka pelle");
	size = strlen(exp) + 1;
	test_mem(memmove(exp, exp+5, 10), ft_memmove(test, test+5, 10), size, name, "test1");

	exp = strdup("kalle anka pelle");
	test = strdup("kalle anka pelle");
	test_mem(memmove(exp+5, exp, 10), ft_memmove(test+5, test, 10), 10, name, "test2");


	exp = strdup("kalle anka pelle");
	test = strdup("kalle anka pelle");
	test_mem(memmove(exp+5, exp+4, 10), ft_memmove(test+5, test+4, 10), 10, name, "test3");

	/* corner case test */
	size_t	size128 =  128 * 1024 * 1024;
	char	*test128 = ft_strnew(size128);
	char	*exp128 = ft_strnew(size128);
	memset(exp128, 'F', size128);
	test_mem(exp128, ft_memmove(test128, exp128, size128), size128, name, "128mb");

	return (0);
}

