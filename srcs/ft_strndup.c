/**
 * File              : ft_strndup.c
 * Author            : Mikael Berglund <mikael.berglund2@gmail.com>
 * Date              : 29.10.2019
 * Last Modified Date: 29.10.2019
 * Last Modified By  : Mikael Berglund <mikael.berglund2@gmail.com>
 */
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberglun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/25 16:39:07 by mberglun          #+#    #+#             */
/*   Updated: 2019/10/25 17:14:25 by mberglun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "testlib.h"

int	main(void)
{

	char	*name = "ft_strndup";

	test_str(strndup("Copy this please", 10), ft_strndup("Copy this please", 10), name, "length less");
	test_str(strndup("kalle", 10), ft_strndup("kalle", 10), name, "length more");
	test_str(strndup("kallepelle", 10), ft_strndup("kallepelle", 10), name, "length exact");
	return (0);
}
