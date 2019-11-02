/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberglun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/01 19:02:32 by mberglun          #+#    #+#             */
/*   Updated: 2019/11/01 19:07:15 by mberglun         ###   ########.fr       */
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

int	test_ft_lstdelone(void)
{
	int		failed = 0;
	char	*name = "ft_lstdelone";

	t_list	*test = ft_lstnew(NULL, 23);
	ft_lstdelone(&test, ft_del);

	failed += test_mem(NULL, test, 1, name, "test1");
	return (failed);
}
