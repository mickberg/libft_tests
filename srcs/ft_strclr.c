/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberglun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/31 16:28:49 by mberglun          #+#    #+#             */
/*   Updated: 2019/10/31 16:33:28 by mberglun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "testlib.h"

int	test_ft_strclr(void)
{
	int		failed = 0;
	char	*name = "ft_strclr";

	char	*test;
	test = (char*)malloc(sizeof(char) * 15);
	ft_memset(test, 'f', 15);

	char	*exp = ft_strnew(14);
	ft_strclr(test);
	failed += test_mem(exp, test, 15, name, "test1");
	return (failed);
}
