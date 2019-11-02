/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberglun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/31 16:34:30 by mberglun          #+#    #+#             */
/*   Updated: 2019/10/31 17:20:35 by mberglun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "testlib.h"

static void	ft_upper(unsigned int i, char *ac)
{
	if (i < 11)
		*ac = ft_toupper(*ac);
}

int	test_ft_striteri(void)
{
	int		failed = 0;
	char	*name = "ft_striteri";

	char	*exp = ft_strnew(15);
	memset(exp, 'c', 14);
	memset(exp, 'f', 13);
	memset(exp, '.', 12);
	memset(exp, 'A', 11);

	char	*test = ft_strnew(15);
	memset(test, 'c', 14);
	memset(test, 'f', 13);
	memset(test, '.', 12);
	memset(test, 'a', 11);

	ft_striteri(test, &ft_upper);
	failed += test_mem(exp, test, 15, name, "test1");

	exp[0] = '\0';
	test[0] = '\0';
	ft_striteri(test, &ft_upper);
	failed += test_mem(exp, test, 15, name, "\"empty\" string");

	memset(exp, '`', 5);
	memset(test, '`', 5);
	ft_striteri(test, &ft_upper);
	failed += test_mem(exp, test, 15, name, "test3");

	memset(exp, 'A', 4);
	memset(test, 'a', 4);
	memset(exp, '[', 2);
	memset(test, '[', 2);
	ft_striteri(test, &ft_upper);
	failed += test_mem(exp, test, 15, name, "test4");


	return (failed);

}
