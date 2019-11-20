/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberglun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/01 17:01:48 by mberglun          #+#    #+#             */
/*   Updated: 2019/11/05 13:11:57 by mikaelber        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "testlib.h"

static int	ft_expected(int n)
{
	char	*str;

	if (n == -1)
	{
		str = "test string \n\t lala";
		write(1, str, strlen(str));
	}
	return (0);
}

int			main(int argc, char **argv)
{
	int		n;
	char	*str;

	if (argc == 1 || (n = atoi(argv[1])) == 0)
		return (0);
	else if (n < 0)
		return ft_expected(n);
	else if (n == 1)
	{
		str = "test string \n\t lala";
		ft_putendl(str);
	}
	return (0);
}
