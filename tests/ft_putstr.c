/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberglun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/01 16:58:20 by mberglun          #+#    #+#             */
/*   Updated: 2019/11/05 13:08:17 by mikaelber        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "testlib.h"

static int	ft_expected(int n)
{
	char	*str;

	if (n == -1)
	{
		str = "test string \n\t lala \0";
		write(1, str, strlen(str));
	}
	return (0);
}

int	main(int argc, char **argv)
{
	int		n;
	char	*str;

	if (argc == 1 || (n = atoi(argv[1])) == 0)
		return (0);

	if (n < 0)
		return ft_expected(n);
	else if (n == 1)
	{
		str = "test string \n\t lala \0";
		ft_putstr(str);
	}
	return (0);
}
