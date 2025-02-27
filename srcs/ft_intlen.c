/**
 * File              : ft_intlen.c
 * Author            : Mikael Berglund <mikael.berglund2@gmail.com>
 * Date              : 22.10.2019
 * Last Modified Date: 22.10.2019
 * Last Modified By  : Mikael Berglund <mikael.berglund2@gmail.com>
 */

#include "testlib.h"



int	main(void)
{
	char	*name = "ft_intlen";

	int		n1 = 0;
	int		n2 = MIN_INT;
	int		n3 = MAX_INT;
	int		n4 = -54322;

	test_int(1, ft_intlen(n1), name, "zero");
	test_int(10, ft_intlen(n2), name, "min int");
	test_int(10, ft_intlen(n3), name, "max int");
	test_int(5, ft_intlen(n4), name, "normal negative");
	return (0);
}
