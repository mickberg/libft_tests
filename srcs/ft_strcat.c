/**
 * File              : ft_strcat.c
 * Author            : Mikael Berglund <mikael.berglund2@gmail.com>
 * Date              : 20.10.2019
 * Last Modified Date: 24.10.2019
 * Last Modified By  : Mikael Berglund <mikael.berglund2@gmail.com>
 */

#include "testlib.h"
#include <string.h>

int	test_ft_strcat(void)
{
	int		failed = 0;
	char	*name = "ft_strcat";

	char	str1[40] = "Leading string";
	char	*str2 = ", trailing";
	char	base[30] = "One";
	char	*a = "Two";
	char	*b = "Three";
	char	*c = "Four";
	char	empty[11] = "";
	char	*fill = "ten length";

	failed += test_str(strcat(str1, str2), ft_strcat(str1, str2), name, "simple test");
	failed += test_str(strcat(base, a), ft_strcat(base, a), name, "base -> a");
	failed += test_str(strcat(base, b), ft_strcat(base, b), name, "base -> b");
	failed += test_str(strcat(base, c), ft_strcat(base, c), name, "base -> c");
	failed += test_str(strcat(empty, fill), ft_strcat(empty, fill), name, "from empty");
	return (failed);
}
