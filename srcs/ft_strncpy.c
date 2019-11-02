/**
 * File              : ft_strncpy.c
 * Author            : Mikael Berglund <mikael.berglund2@gmail.com>
 * Date              : 28.10.2019
 * Last Modified Date: 29.10.2019
 * Last Modified By  : Mikael Berglund <mikael.berglund2@gmail.com>
 */
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberglun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/25 16:00:30 by mberglun          #+#    #+#             */
/*   Updated: 2019/10/25 16:27:32 by mberglun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "testlib.h"

int	main(void)
{

	char	*name = "ft_strncpy";

	char	dst1[10] = "";
	char	*src1 = "A longer srting than destination";
	char	dst2[50];
	char	*src2 = "A shorter string than destination";

	char	ft_dst1[10] = "";
	char	*ft_src1 = "A longer srting than destination";
	char	ft_dst2[50];
	char	*ft_src2 = "A shorter string than destination";


	char	*dest3;
	if (!(dest3 = (char*)malloc(sizeof(char) * 15)))
		return (1000);
	memset(dest3, 0, 15);
	memset(dest3, 's', 14);
	char	*ft_dest3;
	if (!(ft_dest3 = (char*)malloc(sizeof(char) * 15)))
		return (1000);
	memset(ft_dest3, 0, 15);
	memset(ft_dest3, 's', 14);
	char	*src3 = "lorem";
	int		len3 = 6;

	test_str(strncpy(dst1, src1, 9), ft_strncpy(ft_dst1, ft_src1, 9), name, "src longer");
	test_str(strncpy(dst2, src2, 50), ft_strncpy(ft_dst2, ft_src2, 50), name, "src shorter");

	test_str(strncpy(dest3, src3, len3), ft_strncpy(ft_dest3, src3, len3), name, "??");
	return (0);
}
