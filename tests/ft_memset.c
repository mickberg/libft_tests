/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberglun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/25 18:53:38 by mberglun          #+#    #+#             */
/*   Updated: 2019/11/08 17:48:14 by mikaelber        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "testlib.h"

int	main(void)
{
	char	*name = "ft_memset";

	/* test 1 */
	char	*exp1 = ft_strnew(15);
	char	*test1 = ft_strnew(15);
	memset(exp1, 'a', 14);
	memset(exp1, 'f', 10);
	ft_memset(test1, 'a', 14);
	ft_memset(test1, 'f', 10);
	test_mem(exp1, test1, 16, name, "test1");

	/* test 2 */
	char	*exp2 = ft_strnew(15);
	char	*test2 = ft_strnew(15);
	memset(exp2+14, 'a', 1);
	ft_memset(test2+14, 'a', 1);
	test_mem(exp2, test2, 16, name, "test2");

	/* test 3 */
	char	*exp3 = ft_strnew(15);
	char	*test3 = ft_strnew(15);
	memset(exp3, 'a', 1);
	ft_memset(test3, 'a', 1);
	memset(exp3+2, 'f', 3);
	ft_memset(test3+2, 'f', 3);
	test_mem(exp3, test3, 16, name, "test2");

	return (0);
}
