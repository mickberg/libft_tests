/**
 * File              : ft_memset.c
 * Author            : Mikael Berglund <mikael.berglund2@gmail.com>
 * Date              : 28.10.2019
 * Last Modified Date: 29.10.2019
 * Last Modified By  : Mikael Berglund <mikael.berglund2@gmail.com>
 */
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberglun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/25 18:53:38 by mberglun          #+#    #+#             */
/*   Updated: 2019/10/25 19:30:52 by mberglun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "testlib.h"

int	main(void)
{

	char	*name = "ft_memset";

	char	*dest1;
	if (!(dest1 = (char*)malloc(sizeof(char) * 15)))
		return (1000);
	memset(dest1, 0, 15);

	char	*ft_dest1;
	if (!(ft_dest1 = (char*)malloc(sizeof(char) * 15)))
		return (1000);
	memset(ft_dest1, 0, 15);

	memset(dest1, 's', 14);
	memset(ft_dest1, 's', 14);
	test_str(memset(dest1, 'c', 5), ft_memset(ft_dest1, 'c', 5), name, "test1");

	return (0);
}
