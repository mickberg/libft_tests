/**
 * File              : ft_toupper.c
 * Author            : Mikael Berglund <mikael.berglund2@gmail.com>
 * Date              : 20.10.2019
 * Last Modified Date: 23.10.2019
 * Last Modified By  : Mikael Berglund <mikael.berglund2@gmail.com>
 */


#include "testlib.h"


int	main(void)
{
	char *name = "ft_toupper";

	char c1 = 'f';
	char c2 = '1';
	char c3 = '\0';
	char c4 = 'A';

	test_char(toupper(c1), ft_toupper(c1), name, "lower case alph");
	test_char(toupper(c2), ft_toupper(c2), name, "digit");
	test_char(toupper(c3), ft_toupper(c3), name, "non printable");
	test_char(toupper(c4), ft_toupper(c4), name, "Upper case alph");
	return (0);
}
