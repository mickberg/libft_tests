/**
 * File              : ft_strcmp.c
 * Author            : Mikael Berglund <mikael.berglund2@gmail.com>
 * Date              : 22.10.2019
 * Last Modified Date: 23.10.2019
 * Last Modified By  : Mikael Berglund <mikael.berglund2@gmail.com>
 */

#include <string.h>
#include "testlib.h"

int	test_ft_strcmp(void)
{
	int failed = 0;
	char *name = "ft_strcmp";

	char *s1_1 = "kalle Pelle";
	char *s1_2 = "kalle pelle";
	char *s2 = "kalle\0kalle";
	char *s3 = "THis be a test string";
	char *str_p = s3;

	failed += test_int(strcmp(s1_1, s1_2), ft_strcmp(s1_1, s1_2), name, "case sensitivity");
	failed += test_int(strcmp(s2, s2), ft_strcmp(s2, s2), name, "terminator in middle");
	failed += test_int(strcmp(s3, s3), ft_strcmp(s3, s3), name, "normal string");
	failed += test_int(strcmp(str_p, s3), ft_strcmp(str_p, s3), name, "pointer to str");
	return (failed);
}
