/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberglun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 16:43:05 by mberglun          #+#    #+#             */
/*   Updated: 2019/11/02 21:12:24 by mikaelber        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "testlib.h"

int	main(void)
{

	char	*name = "ft_strstr";

	char *hay1 = "abbabba";
	char *need1 = "bb";
	char *hay2 = "aaa";
	char *need2 = "ale";
	char *hay3 = "kalle";
	char *need3 = "";

	test_str(strstr(hay1, need1), ft_strstr(hay1, need1), name, "multiple matches");
	test_str(strstr(hay2, need2), strstr(hay2, need2), name, "empty haystack");
	test_str(strstr(hay3, need3), ft_strstr(hay3, need3), name, "empty needle");
	test_str(strstr(hay3, need2), ft_strstr(hay3, need2), name, "missmatch");
	return (0);
}
