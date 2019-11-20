/**
 * File              : ft_memchr.c
 * Author            : Mikael Berglund <mikael.berglund2@gmail.com>
 * Date              : 29.10.2019
 * Last Modified Date: 29.10.2019
 * Last Modified By  : Mikael Berglund <mikael.berglund2@gmail.com>
 */

#include "testlib.h"

int	main(void)
{

	char	*name = "ft_memchr";

	int		intest[9] = {10, 20, 30, 50, 45321, 70, 80, 90};
	char	*test = strdup("kalle anka pelle");
	size_t	size = strlen(test) + 1;

	test_ptr(memchr(test, 'k', size), ft_memchr(test, 'k', size), name, "test1");
	test_ptr(memchr(test, '\0', size), ft_memchr(test, '\0', size), name, "test2");
	test_ptr(memchr(test, '\0', size-1), ft_memchr(test, '\0', size-1), name, "test3");
	test_ptr(memchr(test, 'e', 5), ft_memchr(test, 'e', 5), name, "test4");
	test_ptr(memchr(test, 'e', 6), ft_memchr(test, 'e', 6), name, "test5");
	test_ptr(memchr(test, 'e', 4), ft_memchr(test, 'e', 4), name, "test6");
	test_ptr(memchr(test, 'e', 3), ft_memchr(test, 'e', 3), name, "test7");
	test_ptr(memchr(test, 177, sizeof(intest)), ft_memchr(test, 177, sizeof(intest)), name, "int arr");

	return (0);
}

