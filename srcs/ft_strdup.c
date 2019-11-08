/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberglun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/25 16:39:07 by mberglun          #+#    #+#             */
/*   Updated: 2019/11/08 22:17:22 by mikaelber        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "testlib.h"

int	main(void)
{

	char	*name = "ft_strdup";

	char	*str1 = "Kalle anka pelle";
	char	*str2 = "kalle\0anka";
	char	*str3 = "";
	int		test[5] = {1819042123, 1851859045, 1881170283, 1701604453, 0};

	test_mem(strdup(str1), ft_strdup(str1), strlen(str1) + 1, name, "normal");
	test_mem(strdup(str2), ft_strdup(str2), 6, name, "terminator in middle");
	test_mem(strdup(str3), ft_strdup(str3), strlen(str3) + 1, name, "empty");
	test_mem(strdup((char*)test), ft_strdup((char*)test), 5, name, "int to str");

	return (0);
}
