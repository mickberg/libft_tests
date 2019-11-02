/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberglun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/01 17:14:21 by mberglun          #+#    #+#             */
/*   Updated: 2019/11/01 17:25:45 by mberglun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "testlib.h"

int	test_ft_putchar_fd(void)
{
	int		failed = 0;

	ft_putchar_fd('x', 0);
	ft_putchar_fd('\n', 1);

	return (failed);
}
