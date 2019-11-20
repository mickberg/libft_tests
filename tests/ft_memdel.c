#include "testlib.h"

int	main(void)
{

	char	*name = "ft_memdel";

	int		*test;
	test = (int*)malloc(sizeof(int) * 4);
	if (!test)
		return (1000);

	memset(test, 0, 4);
	ft_memdel((void*)&test);
	test_mem(NULL, test, 4, name, "test1");
	return (0);
}
