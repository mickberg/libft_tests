/**
 * File              : ft_strncmp.c
 * Author            : Mikael Berglund <mikael.berglund2@gmail.com>
 * Date              : 24.10.2019
 * Last Modified Date: 28.10.2019
 * Last Modified By  : Mikael Berglund <mikael.berglund2@gmail.com>
 */


#include "testlib.h"

int	main(void)
{
	char *name = "ft_strncmp";

	char *s1_1 = "kalle Pelle";
	char *s1_2 = "kalle pelle";
	char *s2 = "kalle\0kalle";
	char *s3 = "THis be a test string";
	char *str_p = s3;

	char *s4_1 = "zyxbcdefgh";
	char *s4_2 = "abcdwxyz";
	int	len4 = 0;

	char *s5_1 = "abcdefgh";
	char *s5_2 = "";
	int	len5 = 0;

	char *s6_1 = "abcdefgh";
	char *s6_2 = "abcdwxyz";
	int	len6 = 4;


	test_int(strncmp(s1_1, s1_2, strlen(s1_2)),
		ft_strncmp(s1_1, s1_2, strlen(s1_2)), name, "case sensitivity");
	test_int(strncmp(s2, s2, 10), ft_strncmp(s2, s2, 10), name, "terminator in middle");
	test_int(strncmp(str_p, s3, strlen(str_p)), ft_strncmp(str_p, s3, strlen(str_p)), name, "pointer to str");
	test_int(strncmp(s4_1, s4_2, len4), ft_strncmp(s4_1, s4_2, len4), name, "0 len");
	test_int(strncmp(s5_1, s5_2, len5), ft_strncmp(s5_1, s5_2, len5), name, "0 len empty s2");
	test_int(strncmp(s6_1, s6_2, len6), ft_strncmp(s6_1, s6_2, len6), name, "exact len match");
	return (0);
}
