/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberglun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/01 18:39:13 by mberglun          #+#    #+#             */
/*   Updated: 2019/11/01 18:42:42 by mberglun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "testlib.h"

int	main(void)
{
	int	min = MIN_INT;
	int max = MAX_INT;
	ft_putnbr_fd(min, 0);
	ft_putchar_fd('\n', 0);
	ft_putnbr_fd(max, 0);
	ft_putchar_fd('\n', 0);
	return (0);
}
