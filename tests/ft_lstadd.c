/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberglun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/01 19:13:48 by mberglun          #+#    #+#             */
/*   Updated: 2019/11/02 21:16:31 by mikaelber        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "testlib.h"

int	main(void)
{

	char	*name = "ft_lstadd";

	char	*exp1 = ft_strdup("this be the last item");
	char	*exp2 = ft_strdup("this be the second item");
	char	*exp3 = ft_strdup("this be the first item");

	char	*test1 = ft_strdup(exp1);
	char	*test2 = ft_strdup(exp2);
	char	*test3 = ft_strdup(exp3);

	t_list	*item1 = ft_lstnew(test1, ft_strlen(test1) + sizeof(char));
	t_list	*item2 = ft_lstnew(test2, ft_strlen(test2) + sizeof(char));
	t_list	*item3 = ft_lstnew(test3, ft_strlen(test3) + sizeof(char));

	t_list	*test = NULL;
	ft_lstadd(&test, item1);
	ft_lstadd(&test, item2);
	ft_lstadd(&test, item3);

	test_str(test3, test->content, name, "item1");
	test_int(ft_strlen(exp3) + sizeof(char), test->content_size, name, "size1");
	if (item2 != test->next)
	{
		printf("Failed [%s] [%s]\n", name, "address of next");
		printf(" - Expected [%p] got [%p]\n", item3, test->next);
	}

	test = test->next;
	test_str(test2, test->content, name, "item2");
	test_int(ft_strlen(exp2) + sizeof(char), test->content_size, name, "size2");
	if (item1 != test->next)
	{
		printf("Failed [%s] [%s]\n", name, "address of next");
		printf(" - Expected [%p] got [%p]\n", item2, test->next);
	}

	test = test->next;
	test_str(test1, test->content, name, "item3");
	test_int(ft_strlen(exp1) + sizeof(char), test->content_size, name, "size3");
	if (test->next != NULL)
	{
		printf("Failed [%s] [%s]\n", name, "end of list");
		printf(" - Expected [NULL] got [%p]\n", test->next);
	}


	return (0);
}
