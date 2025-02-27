/**
 * File              : ft_atoi.c
 * Author            : Mikael Berglund <mikael.berglund2@gmail.com>
 * Date              : 22.10.2019
 * Last Modified Date: 28.10.2019
 * Last Modified By  : Mikael Berglund <mikael.berglund2@gmail.com>
 */

#include "testlib.h"


int	main(void)
{
	char	*name = "ft_atoi";
	char	*n1 = "-2147483648";
	char	*n2 = "	 +2147483637";
	char	*n3 = "-kalle pelle";
	char	*n4 = "+123123123123123";
	char	*n5 = "0587";
	char	*n6 = "0000467";
	char	*n7 = "\t\n\r\v\f 469 \n";
	char	*n8	= "\t\n\r\v\f  469 \n";

	test_int(atoi(n1), ft_atoi(n1), name, "min int");
	test_int(atoi(n2), ft_atoi(n2), name, "max in");
	test_int(atoi(n3), ft_atoi(n3), name, "minus, no digits");
	test_int(atoi(n4), ft_atoi(n4), name, "overflow");
	test_int(atoi(n5), ft_atoi(n5), name, "leading zero");
	test_int(atoi(n6), ft_atoi(n6), name, "leading zeros");
	test_int(atoi(n7), ft_atoi(n7), name, "whitespace chars");
	test_int(atoi(n8), ft_atoi(n8), name, "whitespace chars");
	return (0);
}
