/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pow.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberglun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/01 17:07:16 by mberglun          #+#    #+#             */
/*   Updated: 2019/11/01 17:13:15 by mberglun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "testlib.h"


int	main(void)
{

	char	*name = "ft_pow";

	test_int(pow(10, -3), ft_pow(10, -3), name, "test1");
	test_int(pow(0.3, 3), ft_pow(0.3, 3), name, "test2");
	test_int(pow(4, 5), ft_pow(4, 5), name, "test3");
	test_int(pow(0, 0), ft_pow(0, 0), name, "test4");
	test_int(pow(9, 0), ft_pow(9, 0), name, "test5");
	return (0);
}
