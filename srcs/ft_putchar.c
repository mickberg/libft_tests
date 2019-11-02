/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberglun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/01 16:54:33 by mberglun          #+#    #+#             */
/*   Updated: 2019/11/01 16:57:47 by mberglun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "testlib.h"

int	main(void)
{
	char	*test = "[test string \n\t for ft_putchar\n]\n";
	while (*test != '\0')
		ft_putchar(*test++);

	return (0);
}
