/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberglun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/31 16:34:30 by mberglun          #+#    #+#             */
/*   Updated: 2019/10/31 17:38:46 by mberglun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "testlib.h"

static char	ft_upper(char c)
{
	char cc = ft_toupper(c);
	return cc;
}

int	test_ft_strmap(void)
{
	int		failed = 0;
	char	*name = "ft_strmap";

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

	failed += test_mem(exp, ft_strmap(test, &ft_upper), 15, name, "test1");

	memset(test, 'A', 11);
	exp[0] = '\0';
	test[0] = '\0';
	failed += test_mem(ft_strnew(0), ft_strmap(test, &ft_upper), 15, name, "\"empty\" string");

	memset(exp, '`', 5);
	memset(test, '`', 5);
	failed += test_mem(exp, ft_strmap(test, &ft_upper), 15, name, "test3");

	memset(exp, 'A', 4);
	memset(test, 'a', 4);
	memset(exp, '[', 2);
	memset(test, '[', 2);
	failed += test_mem(exp, ft_strmap(test, &ft_upper), 15, name, "test4");


	return (failed);

}
