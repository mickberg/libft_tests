/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberglun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 16:43:29 by mberglun          #+#    #+#             */
/*   Updated: 2019/11/13 16:44:29 by mberglun         ###   ########.fr       */
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
	else if (n == 1)
	{
		i = 32;
		while (i < 127)
			ft_putchar_fd(i++, 1);
	}
	else if (n == 2)
	{
		i = 67;
		ft_putchar_fd('\n', 1);
		while (i < 100)
			ft_putchar_fd(i++, 1);
	}

	return (0);
}
