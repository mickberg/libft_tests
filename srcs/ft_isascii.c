/**
 * File              : ft_isascii.c
 * Author            : Mikael Berglund <mikael.berglund2@gmail.com>
 * Date              : 22.10.2019
 * Last Modified Date: 22.10.2019
 * Last Modified By  : Mikael Berglund <mikael.berglund2@gmail.com>
 */
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberglun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 14:27:34 by mberglun          #+#    #+#             */
/*   Updated: 2019/10/22 14:28:41 by mberglun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "testlib.h"

int	main(void)
{
	char *name = "ft_isascii";

	char c1 = '1';
	char c2 = 'a';
	char c3 = ']';
	char c4 = '{';
	char c5 = 'Z';
	char c6 = '\n';

	test_int(1, ft_isascii(c1), name, "1");
	test_int(1, ft_isascii(c2), name, "a");
	test_int(1, ft_isascii(c3), name, "[");
	test_int(1, ft_isascii(c4), name, "{");
	test_int(1, ft_isascii(c5), name, "z");
	test_int(1, ft_isascii(c6), name, "newline");
	return (0);
}
