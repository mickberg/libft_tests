/**
 * File              : ft_strcat.c
 * Author            : Mikael Berglund <mikael.berglund2@gmail.com>
 * Date              : 20.10.2019
 * Last Modified Date: 24.10.2019
 * Last Modified By  : Mikael Berglund <mikael.berglund2@gmail.com>
 */

#include "testlib.h"


int	main(void)
{

	char	*name = "ft_strcat";

	char	str1[40] = "Leading string";
	char	_str1[40] = "Leading string";
	char	*str2 = ", trailing";
	char	base[30] = "One";
	char	_base[30] = "One";
	char	*a = "Two";
	char	*b = "Three";
	char	*c = "Four";
	char	empty[11] = "";
	char	_empty[11] = "";
	char	*fill = "ten length";

	test_str(strcat(_str1, str2), ft_strcat(str1, str2), name, "simple test");
	test_str(strcat(_base, a), ft_strcat(base, a), name, "base -> a");
	test_str(strcat(_base, b), ft_strcat(base, b), name, "base -> b");
	test_str(strcat(_base, c), ft_strcat(base, c), name, "base -> c");
	test_str(strcat(_empty, fill), ft_strcat(empty, fill), name, "from empty");
	return (0);
}
