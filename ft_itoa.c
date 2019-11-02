/**
 * File              : ft_itoa.c
 * Author            : Mikael Berglund <mikael.berglund2@gmail.com>
 * Date              : 22.10.2019
 * Last Modified Date: 23.10.2019
 * Last Modified By  : Mikael Berglund <mikael.berglund2@gmail.com>
 */
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberglun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 12:57:34 by mberglun          #+#    #+#             */
/*   Updated: 2019/10/22 13:53:52 by mberglun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "testlib.h"

int	test_ft_itoa(void)
{
	int failed = 0;
	char *name = "ft_itoa";

	int n1 = -2147483648;
	int n2 = 0;
	int n3 = 123456;
	int n4 = -123;

	failed += test_str("-2147483648", ft_itoa(n1), name, "min int");
	failed += test_str("0", ft_itoa(n2), name, "zero");
	failed += test_str("123456", ft_itoa(n3), name, "normal pos");
	failed += test_str("-123", ft_itoa(n4), name, "normal neg");
	return (failed);
}
