/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberglun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/25 16:39:07 by mberglun          #+#    #+#             */
/*   Updated: 2019/10/25 16:42:11 by mberglun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "testlib.h"

int	test_ft_strdup(void)
{
	int		failed = 0;
	char	*name = "ft_strdup";

	char	*str1 = "Kalle anka";
	char	*str2 = "kalle\0anka";
	char	*str3 = "";

	failed += test_str(strdup(str1), ft_strdup(str1), name, "normal");
	failed += test_str(strdup(str2), ft_strdup(str2), name, "terminator in middle");
	failed += test_str(strdup(str3), ft_strdup(str3), name, "empty");
	return (failed);
}
