/**
 * File              : ft_intlen.c
 * Author            : Mikael Berglund <mikael.berglund2@gmail.com>
 * Date              : 22.10.2019
 * Last Modified Date: 22.10.2019
 * Last Modified By  : Mikael Berglund <mikael.berglund2@gmail.com>
 */

#include "testlib.h"
#include <math.h>
#include <stdlib.h>

int				test_ft_intlen(void)
{
	int		failed = 0;
	char	*name = "ft_intlen";

	int		n1 = 0;
	int		n2 = MIN_INT;
	int		n3 = MAX_INT;
	int		n4 = -54322;

	failed += test_int(1, ft_intlen(n1), name, "zero");
	failed += test_int(10, ft_intlen(n2), name, "min int");
	failed += test_int(10, ft_intlen(n3), name, "max int");
	failed += test_int(5, ft_intlen(n4), name, "normal negative");
	return (failed);
}
