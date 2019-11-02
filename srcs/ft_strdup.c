/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberglun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/25 16:39:07 by mberglun          #+#    #+#             */
/*   Updated: 2019/11/02 21:09:45 by mikaelber        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "testlib.h"

int	main(void)
{

	char	*name = "ft_strdup";

	char	*str1 = "Kalle anka";
	char	*str2 = "kalle\0anka";
	char	*str3 = "";

	test_str(strdup(str1), ft_strdup(str1), name, "normal");
	test_str(strdup(str2), ft_strdup(str2), name, "terminator in middle");
	test_str(strdup(str3), ft_strdup(str3), name, "empty");
	return (0);
}
