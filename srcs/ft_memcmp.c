/**
 * File              : ft_memcmp.c
 * Author            : Mikael Berglund <mikael.berglund2@gmail.com>
 * Date              : 29.10.2019
 * Last Modified Date: 29.10.2019
 * Last Modified By  : Mikael Berglund <mikael.berglund2@gmail.com>
 */

#include "testlib.h"

int	main(void)
{
	char	*name = "ft_memcmp";

	int		intest[9] = {10, 20, 30, 40, 50, 45321, 70, 80, 90};
	char	*test = ft_strnew(sizeof(intest));
	char	*exp;

	memcpy(test, intest, sizeof(intest));
	test_int(memcmp(intest, test, sizeof(intest)), ft_memcmp(intest, test, sizeof(intest)), name, "int arr = str");

	exp = strdup("kalle pelle anka");
	test = strdup("kalle pelle anka");

	memset(test, 'f', strlen(exp)+1);
	test_int(memcmp(exp, test, strlen(exp)), ft_memcmp(exp, test, strlen(exp)), name, "test2");
	test_int(memcmp(exp, test, strlen(exp) + 1), ft_memcmp(exp, test, strlen(exp) + 1), name, "test3");

	return (0);
}

