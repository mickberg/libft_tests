/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberglun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/25 17:18:04 by mberglun          #+#    #+#             */
/*   Updated: 2019/11/08 20:58:07 by mikaelber        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "testlib.h"

int	main(void)
{

	char	*name = "ft_memccpy";

	char	*exp = ft_strnew(15);
	char	*test = ft_strnew(15);

	memset(exp+2, 'f', 13);
	memset(test+2, 'f', 13);
	memset(exp+5, 'p', 4);
	memset(test+5, 'p', 4);

	test_ptr(memccpy(exp, "kalle anka", 'a', 1), ft_memccpy(test, "kalle anka", 'a', 1), name, "test1");
	test_mem(exp, test, 16, name, "test1 - res");

	int		inte[] = {-10,20,30,40,50,60,70,80,90};
	int		intt[] = {-10,20,30,40,50,60,70,80,90};
	int		srce[] = {33, 566666, 45321, 5, 56, 223};
	int		srct[] = {33, 566666, 45321, 5, 56, 223};

	int	*e = memccpy(inte, srce, 177, sizeof(srce));
	int *t = ft_memccpy(intt, srct, 177, sizeof(srct));

	test_int(*e, *t, name, "int arr");
	test_mem(inte, intt, sizeof(inte), name, "int res");

	char	test1[10] = "AAAOikein";
	char	test2[6] = "BBOBB";
	char	test11[10] = "AAAOikein";
	char	test21[6] = "BBOBB";
	test_ptr(memccpy(test11, test21, 'O', 2), ft_memccpy(test1, test2, 'O', 2), name, "test3");
	test_str(test11, test1, name, "test3 copied");

	return (0);
}
