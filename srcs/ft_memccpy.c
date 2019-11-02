/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberglun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/25 17:18:04 by mberglun          #+#    #+#             */
/*   Updated: 2019/10/25 18:10:36 by mberglun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "testlib.h"

int	test_ft_memccpy(void)
{
	int		failed = 0;
	char	*name = "ft_memccpy";

	char str1[20] = "                   ";
	char ft_str1[20] = "                   ";

	char	*str2 = "String to be copied before this.";

	int	int1[10] = {1,2,3,4,5,6,7,8,9,10};
	int	ft_int1[10] = {1,2,3,4,5,6,7,8,9,10};

	int	int2[3] = {56,56,56};


	failed += test_str(memccpy(str1, str2, 'p', 19), ft_memccpy(ft_str1, str2, 'p', 19), name, "normal");
	failed += test_str(str1, ft_str1, name, "normal - copied");

	failed += test_intarr(3, memccpy(int1, int2, 'p', 3), ft_memccpy(ft_int1, int2, 'p', 3), name, "int");
	failed += test_intarr(3, int1, ft_int1, name, "int - copied");

	return (failed);
}
