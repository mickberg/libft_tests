#include "testlib.h"

t_list	*ft_tlistmap(t_list *elem)
{
	if (!elem)
		printf("NULL passed to ft_tlistmap\n");
	return ft_lstnew("kalle anka", 11);
}

int	test_ft_lstmap(void)
{
	int		failed = 0;
	char	*name = "ft_lstmap";

	t_list	*test = NULL;
	ft_lstadd(&test, ft_lstnew("a", 2));
	ft_lstadd(&test, ft_lstnew("a", 2));
	ft_lstadd(&test, ft_lstnew("a", 2));
	ft_lstadd(&test, ft_lstnew("a", 2));

	t_list	*mtest = ft_lstmap(test, &ft_tlistmap);

	failed += test_str("kalle anka", mtest->content, name, "test1");
	mtest = mtest->next;
	failed += test_str("kalle anka", mtest->content, name, "test2");
	mtest = mtest->next;
	failed += test_str("kalle anka", mtest->content, name, "test3");
	mtest = mtest->next;
	failed += test_str("kalle anka", mtest->content, name, "test4");
	mtest = mtest->next;
	failed += test_ptr(NULL, mtest, name, "last next");
	return (failed);
}
