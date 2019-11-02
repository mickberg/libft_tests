/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberglun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/31 15:58:08 by mberglun          #+#    #+#             */
/*   Updated: 2019/10/31 16:03:32 by mberglun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "testlib.h"

int	test_ft_strnew(void)
{
	int		failed = 0;
	char	*name = "ft_strnew";

	char	*exp;
	exp = (char*)malloc(sizeof(char) * 16);
	if (!exp)
		return (1000);
	memset(exp, 0, 16);

	failed += test_mem(exp, ft_strnew(15), 15, name, "test1");
	return (failed);
}
