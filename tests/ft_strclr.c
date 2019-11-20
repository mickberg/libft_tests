/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberglun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/31 16:28:49 by mberglun          #+#    #+#             */
/*   Updated: 2019/11/02 21:09:27 by mikaelber        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "testlib.h"

int	main(void)
{

	char	*name = "ft_strclr";

	char	*test;
	test = (char*)malloc(sizeof(char) * 15);
	ft_memset(test, 'f', 15);

	char	*exp = ft_strnew(14);
	ft_strclr(test);
	test_mem(exp, test, 15, name, "test1");
	return (0);
}
