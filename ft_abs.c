/**
 * File              : ft_abs.c
 * Author            : Mikael Berglund <mikael.berglund2@gmail.com>
 * Date              : 22.10.2019
 * Last Modified Date: 22.10.2019
 * Last Modified By  : Mikael Berglund <mikael.berglund2@gmail.com>
 */
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberglun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 13:04:04 by mberglun          #+#    #+#             */
/*   Updated: 2019/10/22 13:17:43 by mberglun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "testlib.h"
#include <stdlib.h>

int	test_ft_abs(void)
{
	int failed = 0;
	char *name = "ft_abs";

	int n1 = -123;
	int n2 = 0;
	int n3 = MIN_INT;
	int n4 = MAX_INT;

	failed += test_int(abs(n1), ft_abs(n1), name, "normal negative");
	failed += test_int(abs(n2), ft_abs(n2), name, "zero");
	failed += test_int(abs(n3), ft_abs(n3), name, "min int");
	failed += test_int(abs(n4), ft_abs(n4), name, "max int");
	return (failed);
}
