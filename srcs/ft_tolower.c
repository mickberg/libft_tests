/**
 * File              : ft_tolower.c
 * Author            : Mikael Berglund <mikael.berglund2@gmail.com>
 * Date              : 20.10.2019
 * Last Modified Date: 23.10.2019
 * Last Modified By  : Mikael Berglund <mikael.berglund2@gmail.com>
 */


#include "testlib.h"


int	main(void)
{
	char *name = "ft_tolower";

	char c1 = 'F';
	char c2 = '2';
	char c3 = '\0';
	char c4 = 'a';

	test_char(tolower(c1), ft_tolower(c1), name, "upper case alph");
	test_char(tolower(c2), ft_tolower(c2), name, "digit");
	test_char(tolower(c3), ft_tolower(c3), name, "non printable");
	test_char(tolower(c4), ft_tolower(c4), name, "lower case alph");
	return (0);
}
