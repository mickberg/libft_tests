/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberglun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/31 16:34:30 by mberglun          #+#    #+#             */
/*   Updated: 2019/11/13 12:56:52 by mikaelber        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "testlib.h"

static void	ft_upper(char *ac)
{
	*ac = ft_toupper(*ac);
}

int	main(void)
{

	char	*name = "ft_striter";

	char	*exp = ft_strnew(15);
	memset(exp, '0', 14);
	memset(exp, 'F', 13);
	memset(exp, '.', 12);
	memset(exp, 'A', 11);

	char	*test = ft_strnew(15);
	memset(test, '0', 14);
	memset(test, 'F', 13);
	memset(test, '.', 12);
	memset(test, 'a', 11);

	ft_striter(test, &ft_upper);
	test_mem(exp, test, 15, name, "test1");

	exp[0] = '\0';
	test[0] = '\0';
	ft_striter(test, &ft_upper);
	test_mem(exp, test, 15, name, "\"empty\" string");

	memset(exp, '`', 5);
	memset(test, '`', 5);
	ft_striter(test, &ft_upper);
	test_mem(exp, test, 15, name, "test3");

	memset(exp, 'A', 4);
	memset(test, 'a', 4);
	memset(exp, '[', 2);
	memset(test, '[', 2);
	ft_striter(test, &ft_upper);
	test_mem(exp, test, 15, name, "test4");
	return (0);
}
