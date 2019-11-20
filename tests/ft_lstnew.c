/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberglun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/01 18:44:06 by mberglun          #+#    #+#             */
/*   Updated: 2019/11/02 21:19:25 by mikaelber        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "testlib.h"

int	main(void)
{

	char	*name = "ft_lstnew";

	int		exp[5] = {1,2,3,4,5};
	int		*test_content = (int*)malloc(sizeof(int) * 5);
	if (!test_content)
		return (1000);
	test_content[0] = 1;
	test_content[1] = 2;
	test_content[2] = 3;
	test_content[3] = 4;
	test_content[4] = 5;

	int		test_size = 5;


	t_list	*test = ft_lstnew(test_content, sizeof(int) * test_size);

	test_intarr(5, exp, test->content, name, "content");
	test_int(sizeof(int) * 5, test->content_size, name, "size");
	test_mem(NULL, test->next, 1, name, "next");
	return (0);
}
