/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberglun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/31 17:54:05 by mberglun          #+#    #+#             */
/*   Updated: 2019/11/02 21:10:33 by mikaelber        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "testlib.h"

int	main(void)
{

	char	*name = "ft_strjoin";

	char	*exp = ft_strnew(15);
	memset(exp, 'f', 15);
	memset(exp, '/', 10);
	memset(exp, 'k', 3);

	char	*test1 = ft_strnew(6);
	memset(test1, '/', 6);
	memset(test1, 'k', 3);

	char	*test2 = ft_strnew(9);
	memset(test2, 'f', 9);
	memset(test2, '/', 4);

	test_mem(exp, ft_strjoin(test1, test2), 16, name, "test1");
	test_mem(ft_strnew(0), ft_strjoin(ft_strnew(0), ft_strnew(0)), 1, name, "test2");
	return (0);
}
