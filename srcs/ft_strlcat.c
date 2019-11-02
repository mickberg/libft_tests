/**
 * File              : ft_strlcat.c
 * Author            : Mikael Berglund <mikael.berglund2@gmail.com>
 * Date              : 24.10.2019
 * Last Modified Date: 28.10.2019
 * Last Modified By  : Mikael Berglund <mikael.berglund2@gmail.com>
 */
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberglun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 19:53:46 by mberglun          #+#    #+#             */
/*   Updated: 2019/10/24 19:58:04 by mberglun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "testlib.h"

int	main(void)
{

	char	*name = "ft_strlcat";

	char	str1[20] = "kalle";
	char	*str2 = " pelle";
	char	str3[10] = "";
	char	*str4 = "copy this string";

	char	ft_str1[20] = "kalle";
	char	*ft_str2 = " pelle";
	char	ft_str3[10] = "";
	char	*ft_str4 = "copy this string";

	char	str5[20] = "kalle";
	char	str7[10] = "";
	char	*str8 = "copy this string";

	char	ft_str5[20] = "kalle";
	char	ft_str7[10] = "";
	char	*ft_str8 = "copy this string";

	char	dest9[10] = "a";
	char	*str9 = "lorem ipsum dolor sit amet";
	char	ft_dest9[10] = "a";
	char	*ft_str9 = "lorem ipsum dolor sit amet";
	int		len9 = 1;

	char *dest10;
	if (!(dest10 = (char*)malloc(sizeof(char) * 15)))
		return (100);
	memset(dest10, 0, 15);
	memset(dest10, 'r', 6);
	dest10[10] = 'a';
	char *ft_dest10;
	if (!(ft_dest10 = (char*)malloc(sizeof(char) * 15)))
		return (100);
	memset(ft_dest10, 0, 15);
	memset(ft_dest10, 'r', 6);
	ft_dest10[10] = 'a';
	int		len10 = 1;
	char	*str10 = "lorem ipsum dolor sit amet";

	char *dest11;
	if (!(dest11 = (char*)malloc(sizeof(char) * 15)))
		return (100);
	memset(dest11, 0, 15);
	memset(dest11, 'r', 14);
	char *ft_dest11;
	if (!(ft_dest11 = (char*)malloc(sizeof(char) * 15)))
		return (100);
	memset(ft_dest11, 0, 15);
	memset(ft_dest11, 'r', 14);
	int		len11 = 15;
	char	*str11 = "lorem ipsum dolor sit amet";


	test_int(strlcat(str1, str2, 20), ft_strlcat(ft_str1, ft_str2, 20), name, "normal concat");
	test_str(str1, ft_str1, name, "normal concat");
	test_int(strlcat(str3, str4, 10), ft_strlcat(ft_str3, ft_str4, 10), name, "cutoff to empty");
	test_str(str3, ft_str3, name, "cutoff to empty");
	test_int(strlcat(str5, str7, 20), ft_strlcat(ft_str5, ft_str7, 20), name, "src empty");
	test_str(str5, ft_str5, name, "src empty");
	test_int(strlcat(str5, str8, 10), ft_strlcat(ft_str5, ft_str8, 10), name, "size smaller than len");
	test_str(str5, ft_str5, name, "size smaller than len");

	test_int(strlcat(dest9, str9, len9), ft_strlcat(ft_dest9, ft_str9, len9), name, "size smaller than length");
	test_str(dest9, ft_dest9, name, "size smaller than length");

	test_int(strlcat(dest10, str10, len10), ft_strlcat(ft_dest10, str10, len10), name, "test10");
	test_str(dest10, ft_dest10, name, "test10 str");

	test_int(strlcat(dest11, str11, len11), ft_strlcat(ft_dest11, str11, len11), name, "size one more than dstlen str");
	test_str(dest11, ft_dest11, name, "size one more than dstlen str");
	return (0);
}
