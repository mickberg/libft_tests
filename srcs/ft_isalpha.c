/**
 * File              : ft_isalpha.c
 * Author            : Mikael Berglund <mikael.berglund2@gmail.com>
 * Date              : 22.10.2019
 * Last Modified Date: 22.10.2019
 * Last Modified By  : Mikael Berglund <mikael.berglund2@gmail.com>
 */
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberglun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 14:00:15 by mberglun          #+#    #+#             */
/*   Updated: 2019/10/22 14:09:03 by mberglun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "testlib.h"

int	test_ft_isalpha(void)
{
	int failed = 0;
	char *name = "ft_isalpha";

	char c1 = '1';
	char c2 = 'a';
	char c3 = 'z';
	char c4 = 'A';
	char c5 = 'Z';
	char c6 = '\n';

	failed += test_int(0, ft_isalpha(c1), name, "1");
	failed += test_int(1, ft_isalpha(c2), name, "a");
	failed += test_int(1, ft_isalpha(c3), name, "z");
	failed += test_int(1, ft_isalpha(c4), name, "A");
	failed += test_int(1, ft_isalpha(c5), name, "Z");
	failed += test_int(0, ft_isalpha(c6), name, "newline");
	return (failed);
}
