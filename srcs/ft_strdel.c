/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberglun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/31 16:04:03 by mberglun          #+#    #+#             */
/*   Updated: 2019/10/31 16:27:51 by mberglun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "testlib.h"

int	test_ft_strdel(void)
{
	int		failed = 0;
	char	*name = "ft_strdel";

	char	*test = ft_strnew(15);
	ft_memset(test, 'f', 15);

	ft_strdel(&test);
	failed += test_mem(NULL, test, 15, name, "test1");
	return (failed);
}
