/**
 * File              : ft_isalnum.c
 * Author            : Mikael Berglund <mikael.berglund2@gmail.com>
 * Date              : 22.10.2019
 * Last Modified Date: 22.10.2019
 * Last Modified By  : Mikael Berglund <mikael.berglund2@gmail.com>
 */
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberglun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 14:22:01 by mberglun          #+#    #+#             */
/*   Updated: 2019/10/22 14:23:01 by mberglun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "testlib.h"

int	main(void)
{

	char	*name = "ft_isalnum";

	char	c1 = '1';
	char	c2 = 'a';
	char	c3 = ']';
	char	c4 = '{';
	char	c5 = 'Z';
	char	c6 = '\n';;

	test_int(1, ft_isalnum(c1), name, "1");
	test_int(1, ft_isalnum(c2), name, "a");
	test_int(0, ft_isalnum(c3), name, "]");
	test_int(0, ft_isalnum(c4), name, "1");
	test_int(1, ft_isalnum(c5), name, "z");
	test_int(0, ft_isalnum(c6), name, "newline");
	return (0);
}
