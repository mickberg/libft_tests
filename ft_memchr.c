/**
 * File              : ft_memchr.c
 * Author            : Mikael Berglund <mikael.berglund2@gmail.com>
 * Date              : 29.10.2019
 * Last Modified Date: 29.10.2019
 * Last Modified By  : Mikael Berglund <mikael.berglund2@gmail.com>
 */

#include "testlib.h"

int	test_ft_memchr(void)
{
	int		failed = 0;
	char	*name = "ft_memchr";

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
	memcpy(exp, "kalle f pelle", 13);
	memcpy(test, "kalle f pelle", 13);
	failed += test_mem(memchr(exp, 'f', 11), ft_memchr(test, 'f', 11), 15, name, "exact len");

	memset(exp, 0, 15);
	memset(test, 0, 15);
	failed += test_mem(memchr(exp, 'k', 0), ft_memchr(test, 'k', 0), 15, name, "0 len");

	return (failed);
}

