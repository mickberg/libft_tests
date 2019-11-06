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

	char	*exp = (char*)malloc(sizeof(char) * 15);
	if (!exp)
		return (1000);
	memset(exp, 0, 15);

	char	*test = (char*)malloc(sizeof(char) * 15);
	if (!test)
		return (1000);
	memset(test, 0, 15);

	memset(exp, 'f', 12);
	memset(test, 'f', 12);
	test_mem(memmove(exp, "test string", 11), ft_memmove(test, "test string", 11), 15, name, "exact len");

	memset(exp, 0, 15);
	memset(test, 0, 15);
	test_mem(memmove(exp, "test string", 0), ft_memmove(test, "test string", 0), 15, name, "0 len");


	size_t	size128 =  128 * 1024 * 1024;
	char	*test128 = ft_strnew(size128);
	char	*exp128 = ft_strnew(size128);

	memset(exp128, 'F', size128);

	test_mem(exp128, ft_memmove(test128, exp128, size128), size128, name, "128mb");


	return (0);
}

