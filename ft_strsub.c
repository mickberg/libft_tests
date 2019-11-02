/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberglun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/31 17:58:49 by mberglun          #+#    #+#             */
/*   Updated: 2019/10/31 18:08:00 by mberglun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "testlib.h"

int	test_ft_strsub(void)
{
	int		failed = 0;
	char	*name = "ft_strsub";

	char	*exp = ft_strnew(6);
	memset(exp, 'f', 6);
	memset(exp, 'a', 1);

	char	*test = ft_strnew(15);
	memset(test, 'c', 15);
	memset(test, 'f', 14);
	memset(test, 'a', 9);
	memset(test, 'k', 8);

	failed += test_mem(exp, ft_strsub(test, 8, 6), 7, name, "test1");
	failed += test_mem(ft_strnew(0), ft_strsub(test, 8, 0), 1, name, "test2");
	return (failed);
}

