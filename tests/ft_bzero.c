/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberglun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/25 18:53:38 by mberglun          #+#    #+#             */
/*   Updated: 2019/11/08 17:57:19 by mikaelber        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "testlib.h"

int	main(void)
{
	char	*name = "ft_bzero";

	char	*test = ft_strnew(15);
	char	*exp = ft_strnew(15);

	memset(test, 'f', 16);
	memset(exp, 'f', 16);

	bzero(exp, 10);
	ft_bzero(test, 10);
	test_mem(exp, test, 16, name, "test1");

	bzero(exp, 15);
	ft_bzero(test, 15);
	test_mem(exp, test, 16, name, "test2");

	memset(exp, 'f', 16);
	memset(test, 'f', 16);

	bzero(exp+5, 10);
	ft_bzero(test+5, 10);
	test_mem(exp, test, 16, name, "test3");

	return (0);
}
