/**
 * File              : test_main.c
 * Author            : Mikael Berglund <mikael.berglund2@gmail.com>
 * Date              : 20.10.2019
 * Last Modified Date: 29.10.2019
 * Last Modified By  : Mikael Berglund <mikael.berglund2@gmail.com>
 */

#include "testlib.h"
#include <stdio.h>

int	main(void)
{
	int failed = 0;

	failed += test_ft_strlen();
	failed += test_ft_toupper();
	failed += test_ft_tolower();
	failed += test_ft_strcmp();
	failed += test_ft_strncmp();
	failed += test_ft_abs();
	failed += test_ft_intlen();
	failed += test_ft_itoa();
	failed += test_ft_isalpha();
	failed += test_ft_isdigit();
	failed += test_ft_isalnum();
	failed += test_ft_isascii();
	failed += test_ft_isprint();
	failed += test_ft_atoi();
	failed += test_ft_strcat();
	failed += test_ft_strncat();
	failed += test_ft_strstr();
	failed += test_ft_strnstr();
	failed += test_ft_strchr();
	failed += test_ft_strrchr();
	failed += test_ft_strlcat();
	failed += test_ft_strcpy();
	failed += test_ft_strncpy();
	failed += test_ft_strdup();
	failed += test_ft_strndup();
	failed += test_ft_memccpy();
	failed += test_ft_memset();
	failed += test_ft_bzero();
	failed += test_ft_memcpy();

	failed += test_ft_memalloc();
	failed += test_ft_memdel();
	failed += test_ft_strnew();
	failed += test_ft_strdel();
	failed += test_ft_strclr();
	failed += test_ft_striter();
	failed += test_ft_striteri();
	failed += test_ft_strmap();
	failed += test_ft_strmapi();
	failed += test_ft_strequ();
	failed += test_ft_strnequ();
	failed += test_ft_strjoin();
	failed += test_ft_strsub();
	failed += test_ft_strtrim();
	failed += test_ft_strsplit();
	failed += test_ft_putchar();
	failed += test_ft_putstr();
	failed += test_ft_putendl();
	failed += test_ft_putnbr();
	failed += test_ft_putchar_fd();
	failed += test_ft_putstr_fd();
	failed += test_ft_putendl_fd();
	failed += test_ft_putnbr_fd();

	failed += test_ft_lstnew();
	failed += test_ft_lstdelone();
	failed += test_ft_lstadd();
	failed += test_ft_lstdel();
	failed += test_ft_lstiter();
	failed += test_ft_lstmap();

	failed += test_ft_pow();

	printf("\nTests returned [%d] errors.\n", failed);
	return (0);
}
