/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberglun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/01 19:02:32 by mberglun          #+#    #+#             */
/*   Updated: 2019/11/06 11:21:01 by mikaelber        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "testlib.h"

static void ft_del(void *content, size_t size)
{
	if (content != NULL && size != 0)
		free(content);
}

int	main(void)
{

	char	*name = "ft_lstdel";

	t_list	*tests = NULL;

	t_list	*test1 = ft_lstnew("test1", 6);
	t_list	*test2 = ft_lstnew("test2", 6);
	t_list	*test3 = ft_lstnew("test3", 6);
	t_list	*test4 = ft_lstnew("test4", 6);
	t_list	*test5 = ft_lstnew("test5", 6);
	t_list	*test6 = ft_lstnew("test6", 6);
	ft_lstadd(&tests, test1);
	ft_lstadd(&tests, test2);
	ft_lstadd(&tests, test3);
	ft_lstadd(&tests, test4);
	ft_lstadd(&tests, test5);
	ft_lstadd(&tests, test6);

	ft_lstdel(&tests, ft_del);

	test_ptr(NULL, tests, name, "test0");
	return (0);
}
