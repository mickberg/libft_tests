/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberglun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/31 16:34:30 by mberglun          #+#    #+#             */
/*   Updated: 2019/10/31 17:48:26 by mberglun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "testlib.h"

int	test_ft_strequ(void)
{
	int		failed = 0;
	char	*name = "ft_strequ";

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

	failed += test_int(0, ft_strequ(exp, test), name, "test1");

	memset(test, 'A', 11);
	exp[0] = '\0';
	test[0] = '\0';
	failed += test_int(1, ft_strequ(exp, test), name, "test2");

	memset(exp, '`', 5);
	memset(test, '`', 5);
	failed += test_int(1, ft_strequ(exp, test), name, "test3");

	memset(exp, 'A', 4);
	memset(test, 'a', 4);
	memset(exp, '[', 2);
	memset(test, '[', 2);
	failed += test_int(0, ft_strequ(exp, test), name, "test4");

	return (failed);

}
