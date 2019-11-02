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

	char	*test = "kalle f pelle";

	test_ptr(memchr(test, 'f', 13), ft_memchr(test, 'f', 13), name, "test1");
	test_ptr(memchr(test, 'f', 0), ft_memchr(test, 'f', 0), name, "test1");


	return (0);
}

