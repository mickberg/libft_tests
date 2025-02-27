/**
 * File              : ft_strlen.c
 * Author            : Mikael Berglund <mikael.berglund2@gmail.com>
 * Date              : 20.10.2019
 * Last Modified Date: 23.10.2019
 * Last Modified By  : Mikael Berglund <mikael.berglund2@gmail.com>
 */

#include "testlib.h"

int main(void)
{

	char	*name = "ft_strlen";

	char	*str1 = "";
	char	*str2 = "Normal short string";
	char	*str3 = "String with terminator \0 symbol in the middle";
	char	*str4 = &str3[10];

	test_int(strlen(str1), ft_strlen(str1), name, "empty string");
	test_int(strlen(str2), ft_strlen(str2), name, "normal");
	test_int(strlen(str3), ft_strlen(str3), name, "terminator in middle");
	test_int(strlen(str4), ft_strlen(str4), name, "pointer to middle");
	return (0);
}
