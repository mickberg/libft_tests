/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberglun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 13:04:04 by mberglun          #+#    #+#             */
/*   Updated: 2019/11/02 19:31:19 by mberglun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "testlib.h"

int	main(void)
{
	char *name = "ft_abs";

	int n1 = -123;
	int n2 = 0;
	int n3 = MIN_INT;
	int n4 = MAX_INT;

	test_int(abs(n1), ft_abs(n1), name, "normal negative");
	test_int(abs(n2), ft_abs(n2), name, "zero");
	test_int(abs(n3), ft_abs(n3), name, "min int");
	test_int(abs(n4), ft_abs(n4), name, "max int");
	return (0);
}
