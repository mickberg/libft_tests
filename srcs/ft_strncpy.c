/**
 * File              : ft_strncpy.c
 * Author            : Mikael Berglund <mikael.berglund2@gmail.com>
 * Date              : 28.10.2019
 * Last Modified Date: 29.10.2019
 * Last Modified By  : Mikael Berglund <mikael.berglund2@gmail.com>
 */
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberglun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/25 16:00:30 by mberglun          #+#    #+#             */
/*   Updated: 2019/10/25 16:27:32 by mberglun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "testlib.h"

int	main(void)
{
	char	*name = "ft_strncpy";


	char	*test = strdup("Lorem ipsum dolor sit amet");
	size_t	size = strlen(test) + 5;
	char	*t_dst = ft_strnew(size);
	char	*exp = strdup("Lorem ipsum dolor sit amet");
	char	*e_dst = ft_strnew(size);

	test_mem(strncpy(e_dst, exp, 10), ft_strncpy(t_dst, test, 10), size, name, "test1");

	memset(test + 5, '\0', 1);
	memset(exp + 5, '\0', 1);
	test_mem(strncpy(e_dst, exp, 10), ft_strncpy(t_dst, test, 10), size, name, "test2");

	memset(test, '\0', 5);
	memset(exp, '\0', 5);
	test_mem(strncpy(e_dst, exp, size - 4), ft_strncpy(t_dst, test, size - 4), size, name, "test3");

	return (0);
}
