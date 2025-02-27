/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberglun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/31 16:04:03 by mberglun          #+#    #+#             */
/*   Updated: 2019/11/02 21:09:40 by mikaelber        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "testlib.h"

int	main(void)
{

	char	*name = "ft_strdel";

	char	*test = ft_strnew(15);
	ft_memset(test, 'f', 15);

	ft_strdel(&test);
	test_mem(NULL, test, 15, name, "test1");
	return (0);
}
