/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberglun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/01 17:04:46 by mberglun          #+#    #+#             */
/*   Updated: 2019/11/13 16:48:41 by mberglun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "testlib.h"

static int	min = MIN_INT;
static int	max = MAX_INT;

static int	ft_expected(int n)
{
	char	*str;

	if (n == -1)
	{
		str = ft_itoa(min);
		write(1, str, strlen(str));
	}
	else if (n == -2)
	{
		str = ft_itoa(max);
		write(1, str, strlen(str));
	}
	return (0);
}

int	main(int argc, char **argv)
{
	int		n;

	if (argc == 1 || (n = atoi(argv[1])) == 0)
		return (0);

	if (n < 0)
		return ft_expected(n);
	else if (n == 1)
	{
		ft_putnbr_fd(min, 1);
	}
	else if (n == 2)
	{
		ft_putnbr_fd(max, 1);
	}
	return (0);
}
