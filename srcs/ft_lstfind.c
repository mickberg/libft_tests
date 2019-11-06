#include "testlib.h"

static int	findn;

static int	find_num(void * num, size_t size)
{
	if (size != sizeof(int) * 1)
		return (0);
	int	*n = (int*)num;
	if (*n == findn)
		return (1);
	return (0);
}

int		main(void)
{
	char	*name = "ft_lstfind";

	int	i1 = 1;
	int	i2 = 2;
	int	i3 = 3;
	int	i4 = 4;
	int	i5 = 5;
	int	i6 = 6;

	t_list	*test = NULL;
	t_list	*test1 = ft_lstnew(&i1, sizeof(int));
	t_list	*test2 = ft_lstnew(&i2, sizeof(int));
	t_list	*test3 = ft_lstnew(&i3, sizeof(int));
	t_list	*test4 = ft_lstnew(&i4, sizeof(int));
	t_list	*test5 = ft_lstnew(&i5, sizeof(int));
	t_list	*test6 = ft_lstnew(&i6, sizeof(int));
	ft_lstadd(&test, test1);
	ft_lstadd(&test, test2);
	ft_lstadd(&test, test3);
	ft_lstadd(&test, test4);
	ft_lstadd(&test, test5);
	ft_lstadd(&test, test6);

	findn = 3;
	test_ptr(test3, ft_lstfind(test, find_num), name, "test1");
	findn = 2;
	test_ptr(test2, ft_lstfind(test, find_num), name, "test2");
	findn = 123;
	test_ptr(NULL, ft_lstfind(test, find_num), name, "test3");
	findn = 6;
	test_ptr(test6, ft_lstfind(test, find_num), name, "test4");
	findn = 1;
	test_ptr(test1, ft_lstfind(test, find_num), name, "test5");
	return (0);
}
