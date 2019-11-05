/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberglun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/01 16:54:33 by mberglun          #+#    #+#             */
/*   Updated: 2019/11/05 12:59:14 by mikaelber        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "testlib.h"

static int	ft_expected(int n)
{
	int		i;

	if (n == -1)
	{
		i = 32;
		while (i < 127)
		{
			write(1, &i, 1);
			++i;
		}
	}
	else if (n == -2)
	{
		i = 67;
		write(1, "\n", 1);
		while (i < 100)
		{
			write(1, &i, 1);
			++i;
		}
	}
	return (0);
}


int			main(int argc, char	**argv)
{
	int		n;
	int		i;

	if (argc == 1 || (n = atoi(argv[1]) == 0))
		return (0);
	n = atoi(argv[1]);

	// Output expected
	if (n < 0)
		return ft_expected(n);

	if (n == 1)
	{
		i = 32;
		while (i < 127)
			ft_putchar(i++);
	}
	else if (n == 2)
	{
		i = 67;
		ft_putchar('\n');
		while (i < 100)
			ft_putchar(i++);
	}

	return (0);
}
