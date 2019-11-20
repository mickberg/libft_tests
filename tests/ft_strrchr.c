/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberglun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 18:34:40 by mberglun          #+#    #+#             */
/*   Updated: 2019/11/02 21:12:14 by mikaelber        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "testlib.h"

int	main(void)
{

	char	*name = "ft_strrchr";

	char	*str1 = "lorem ipsum";
	char	c1 = 'a';
	char	c2 = ' ';
	char	c3 = 'm';
	char	c4 = '\0';

	test_str(strrchr(str1, c1), ft_strrchr(str1, c1), name, "missmatch");
	test_str(strrchr(str1, c2), ft_strrchr(str1, c2), name, "space");
	test_str(strrchr(str1, c3), ft_strrchr(str1, c3), name, "match first");
	test_str(strrchr(str1, c4), ft_strrchr(str1, c4), name, "terminator");
	return (0);
}
