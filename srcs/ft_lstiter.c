#include "testlib.h"

void	ft_toupper_str(char *c)
{
	*c = ft_toupper(*c);
}

void	ft_print(t_list *item)
{
	char	*cont = item->content;
	ft_striter(cont, &ft_toupper_str);
}
int	test_ft_lstiter(void)
{
	int		failed = 0;
	char	*name = "ft_lstiter";

	t_list	*test = NULL;
	ft_lstadd( &test, ft_lstnew(ft_strdup("-iii-"), sizeof(char)*11) );
	ft_lstadd( &test, ft_lstnew(ft_strdup("  "), sizeof(char)*11) );
	ft_lstadd( &test, ft_lstnew(ft_strdup("kalle anka"), sizeof(char)*11) );

	ft_lstiter(test, ft_print);

	failed += test_str("KALLE ANKA", test->content, name, "item1");
	test = test->next;
	failed += test_str("  ", test->content, name, "item2");
	test = test->next;
	failed += test_str("-III-", test->content, name, "item3");

	return (failed);
}
