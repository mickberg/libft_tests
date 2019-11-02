#include "testlib.h"

int	test_ft_memdel(void)
{
	int		failed = 0;
	char	*name = "ft_memdel";

	int		*test;
	test = (int*)malloc(sizeof(int) * 4);
	if (!test)
		return (1000);

	memset(test, 0, 4);
	ft_memdel((void*)&test);
	failed += test_mem(NULL, test, 4, name, "test1");
	return (failed);
}
