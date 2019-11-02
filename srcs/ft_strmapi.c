/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberglun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/31 16:34:30 by mberglun          #+#    #+#             */
/*   Updated: 2019/11/02 21:17:31 by mikaelber        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "testlib.h"

static char	ft_upper(unsigned int i, char c)
{
	if (i < 11)
		return ft_toupper(c);
	else
		return c;
}

int	main(void)
{

	char	*name = "ft_strmapi";

	char	*exp = ft_strnew(15);
	memset(exp, '0', 14);
	memset(exp, 'f', 13);
	memset(exp, '.', 12);
	memset(exp, 'A', 11);

	char	*test = ft_strnew(15);
	memset(test, '0', 14);
	memset(test, 'f', 13);
	memset(test, '.', 12);
	memset(test, 'a', 11);

	test_mem(exp, ft_strmapi(test, &ft_upper), 15, name, "test1");

	exp[0] = '\0';
	test[0] = '\0';
	test_mem(ft_strnew(0), ft_strmapi(test, &ft_upper), 15, name, "\"empty\" string");

	memset(test, 'A', 11);
	memset(exp, '`', 5);
	memset(test, '`', 5);
	test_mem(exp, ft_strmapi(test, &ft_upper), 15, name, "test3");

	memset(exp, 'A', 4);
	memset(test, 'a', 4);
	memset(exp, '[', 2);
	memset(test, '[', 2);
	test_mem(exp, ft_strmapi(test, &ft_upper), 15, name, "test4");


	return (0);

}
