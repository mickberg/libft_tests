/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberglun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/01 16:08:02 by mberglun          #+#    #+#             */
/*   Updated: 2019/11/02 21:12:32 by mikaelber        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "testlib.h"

int	main(void)
{

	char	*name = "ft_strtrim";

	char	*exp = ft_strdup("kalle\t\tii");

	char	*test = ft_strnew(15);
	ft_memset(test, ' ', 15);
	ft_memset(test+3, '\t', 10);
	ft_memset(test+4, '\n', 2);
	ft_strncpy(test+5, "kalle", 5);
	ft_strncpy(test+12, "ii", 2);


	test_mem(exp, ft_strtrim(test), 6, name, "test1");

	exp = ft_strdup("kalle anka");
	test = ft_strdup("kalle anka");
	test_mem(exp, ft_strtrim(test), 11, name, "test2");

	return (0);
}
