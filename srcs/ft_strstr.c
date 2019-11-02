/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberglun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 16:43:05 by mberglun          #+#    #+#             */
/*   Updated: 2019/10/24 17:47:37 by mberglun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "testlib.h"

int	test_ft_strstr(void)
{
	int		failed = 0;
	char	*name = "ft_strstr";

	char *hay1 = "abbabba";
	char *need1 = "bb";
	char *hay2 = "aaa";
	char *need2 = "ale";
	char *hay3 = "kalle";
	char *need3 = "";

	failed += test_str(strstr(hay1, need1), ft_strstr(hay1, need1), name, "multiple matches");
	failed += test_str(strstr(hay2, need2), strstr(hay2, need2), name, "empty haystack");
	failed += test_str(strstr(hay3, need3), ft_strstr(hay3, need3), name, "empty needle");
	failed += test_str(strstr(hay3, need2), ft_strstr(hay3, need2), name, "missmatch");
	return (failed);
}
