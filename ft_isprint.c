/**
 * File              : ft_isprint.c
 * Author            : Mikael Berglund <mikael.berglund2@gmail.com>
 * Date              : 22.10.2019
 * Last Modified Date: 22.10.2019
 * Last Modified By  : Mikael Berglund <mikael.berglund2@gmail.com>
 */
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberglun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 14:27:34 by mberglun          #+#    #+#             */
/*   Updated: 2019/10/22 14:55:58 by mberglun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "testlib.h"

int	test_ft_isprint(void)
{
	int failed = 0;
	char *name = "ft_isprint";

	char c1 = ' ';
	char c2 = '~';
	char c3 = (char)(31);
	char c4 = (char)(127);

	failed += test_int(1, ft_isprint(c1), name, "space");
	failed += test_int(1, ft_isprint(c2), name, "~");
	failed += test_int(0, ft_isprint(c3), name, "first left");
	failed += test_int(0, ft_isprint(c4), name, "first right");
	return (failed);
}
