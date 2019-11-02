/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberglun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/25 18:53:38 by mberglun          #+#    #+#             */
/*   Updated: 2019/10/25 19:22:19 by mberglun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "testlib.h"

int	test_ft_bzero(void)
{
	int		failed = 0;
	char	*name = "ft_bzero";

	char	str1[10];
	char	str2[20];
	char	str3[5];

	char	ft_str1[10];
	char	ft_str2[20];
	char	ft_str3[5];

	bzero(str1, 10);
	ft_bzero(ft_str1, 10);
	failed += test_str(str1, ft_str1, name, "normal");

	bzero(str2, 11);
	ft_bzero(ft_str2, 11);
	failed += test_str(str2, ft_str2, name, "partial fill");

	bzero(str3, 5);
	ft_bzero(ft_str3, 5);
	failed += test_str(str3, ft_str3, name, "full width");

	return (failed);
}
