/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberglun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/01 19:02:32 by mberglun          #+#    #+#             */
/*   Updated: 2019/11/01 19:39:48 by mberglun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "testlib.h"

static void ft_del(void *content, size_t size)
{
	if (content != NULL)
		printf("content not NULL\n");
	if (size != 0)
		printf("size not 0\n");
}

int	test_ft_lstdel(void)
{
	int		failed = 0;
	char	*name = "ft_lstdel";

	t_list	**tests = (t_list**)malloc(sizeof(t_list*) * 6);
	if (!tests)
		return (1000);

	tests[0] = ft_lstnew(NULL, 23);
	tests[1] = ft_lstnew(NULL, 9);
	tests[2] = ft_lstnew(NULL, 9);
	tests[3] = ft_lstnew(NULL, 9);
	tests[4] = ft_lstnew(NULL, 9);
	tests[5] = ft_lstnew(NULL, 9);

	t_list	*test = NULL;
	int	i = 0;
	while (i < 6)
	{
		ft_lstadd(&test, tests[i]);
		++i;
	}

	ft_lstdel(&test, ft_del);

	failed += test_ptr(NULL, tests[0], name, "test1");
	failed += test_ptr(NULL, tests[1], name, "test2");
	failed += test_ptr(NULL, tests[2], name, "test3");
	failed += test_ptr(NULL, tests[3], name, "test4");
	failed += test_ptr(NULL, tests[4], name, "test5");
	failed += test_ptr(NULL, tests[5], name, "test6");
	return (failed);
}
