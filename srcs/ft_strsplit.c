/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberglun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/01 16:23:14 by mberglun          #+#    #+#             */
/*   Updated: 2019/11/01 16:49:23 by mberglun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "testlib.h"

int	test_ft_strsplit(void)
{
	int		failed = 0;
	char	*name = "ft_strsplit";

	char	*exp = ft_strdup("kalleankapelle");
	size_t	explen = ft_strlen(exp);

	char	*test = ft_strdup("    kalle  ank a p e l l e  ");

	char	**testres = ft_strsplit(test, ' ');
	int		i = 0;
	char	*testconcat = ft_strnew(explen);

	while (testres[i] != NULL)
		ft_strlcat(testconcat, testres[i++], explen + 1);

	failed += test_mem(exp, testconcat, explen + 1, name, "test1");

	test = ft_strdup("kalleankapelle");

	testres = ft_strsplit(test, ' ');
	i = 0;
	testconcat = ft_strnew(explen);

	while (testres[i] != NULL)
		ft_strlcat(testconcat, testres[i++], explen + 1);

	failed += test_mem(exp, testconcat, explen + 1, name, "test2");
	return (failed);
}
