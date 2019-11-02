/**
 * File              : ft_isdigit.c
 * Author            : Mikael Berglund <mikael.berglund2@gmail.com>
 * Date              : 22.10.2019
 * Last Modified Date: 22.10.2019
 * Last Modified By  : Mikael Berglund <mikael.berglund2@gmail.com>
 */
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberglun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 14:13:15 by mberglun          #+#    #+#             */
/*   Updated: 2019/10/22 14:17:33 by mberglun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "testlib.h"

int	test_ft_isdigit(void)
{
	int failed = 0;
	char *name = "ft_isdigit";

	char c1 = '0';
	char c2 = '9';
	char c3 = (char)(47);
	char c4 = (char)(58);

	failed += test_int(1, ft_isdigit(c1), name, "0");
	failed += test_int(1, ft_isdigit(c2), name, "9");
	failed += test_int(0, ft_isdigit(c3), name, "first left");
	failed += test_int(0, ft_isdigit(c4), name, "first right");
	return (failed);
}
