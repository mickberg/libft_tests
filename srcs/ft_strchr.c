/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberglun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 18:34:40 by mberglun          #+#    #+#             */
/*   Updated: 2019/10/24 19:06:45 by mberglun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "testlib.h"

int	test_ft_strchr(void)
{
	int		failed = 0;
	char	*name = "ft_strchr";

	char	*str1 = "lorem ipsum";
	char	c1 = 'a';
	char	c2 = ' ';
	char	c3 = 'm';
	char	c4 = '\0';

	failed += test_str(strchr(str1, c1), ft_strchr(str1, c1), name, "missmatch");
	failed += test_str(strchr(str1, c2), ft_strchr(str1, c2), name, "space");
	failed += test_str(strchr(str1, c3), ft_strchr(str1, c3), name, "match first");
	failed += test_str(strchr(str1, c4), ft_strchr(str1, c4), name, "terminator");
	return (failed);
}
