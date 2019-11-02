/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberglun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/25 16:00:30 by mberglun          #+#    #+#             */
/*   Updated: 2019/10/25 16:18:18 by mberglun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "testlib.h"

int	test_ft_strcpy(void)
{
	int		failed = 0;
	char	*name = "ft_strcpy";

	char	*src1 = "A longer srting than destination";
	char	dst2[50];
	char	*src2 = "A shorter string than destination";

	char	ft_dst1[10] = "";
	char	*ft_src1 = "A longer srting than destination";
	char	ft_dst2[50];
	char	*ft_src2 = "A shorter string than destination";

	failed += test_str(src1, ft_strcpy(ft_dst1, ft_src1), name, "src longer");
	failed += test_str(strcpy(dst2, src2), ft_strcpy(ft_dst2, ft_src2), name, "src shorter");
	return (failed);
}
