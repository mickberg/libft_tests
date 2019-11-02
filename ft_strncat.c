/**
 * File              : ft_strncat.c
 * Author            : Mikael Berglund <mikael.berglund2@gmail.com>
 * Date              : 20.10.2019
 * Last Modified Date: 24.10.2019
 * Last Modified By  : Mikael Berglund <mikael.berglund2@gmail.com>
 */

#include "testlib.h"
#include <string.h>

int	test_ft_strncat(void)
{
	int		failed = 0;
	char	*name = "ft_strncat";

	char	str1[40] = "Leading string";
	char	*str2 = ", trailing";
	char	base[30] = "One";
	char	*a = "Two";
	char	*b = "Three";
	char	*c = "Four";
	char	empty[11] = "";
	char	*fill = "ten length";

	failed += test_str(strncat(str1, str2, strlen(str2)/2),
		ft_strncat(str1, str2, strlen(str2)/2), name, "simple test");
	failed += test_str(strncat(base, a, 3), ft_strncat(base, a,3), name, "base -> a");
	failed += test_str(strncat(base, b, 1), ft_strncat(base, b, 1), name, "base -> b");
	failed += test_str(strncat(base, c, 4), ft_strncat(base, c, 4), name, "base -> c");
	failed += test_str(strncat(empty, fill, 10), ft_strncat(empty, fill, 10), name, "from empty");
	return (failed);
}
