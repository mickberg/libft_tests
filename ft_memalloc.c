/**
 * File              : ft_memalloc.c
 * Author            : Mikael Berglund <mikael.berglund2@gmail.com>
 * Date              : 29.10.2019
 * Last Modified Date: 29.10.2019
 * Last Modified By  : Mikael Berglund <mikael.berglund2@gmail.com>
 */

#include "testlib.h"

int	test_ft_memalloc(void)
{
	int		failed = 0;
	char	*name = "ft_memalloc";

	char	*str;
	str = (char*)malloc(15);
	memset(str, 0, 15);

	failed += test_mem(str, ft_memalloc(15), 15, name, "test1");
	return (failed);
}
