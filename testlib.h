/**
 * File              : testlib.h
 * Author            : Mikael Berglund <mikael.berglund2@gmail.com>
 * Date              : 20.10.2019
 * Last Modified Date: 29.10.2019
 * Last Modified By  : Mikael Berglund <mikael.berglund2@gmail.com>
 */

#ifndef FT_TESTLIB_H
# define FT_TESTLIB_H

#define MIN_INT -2147483648;
#define MAX_INT 2147483647;

#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include "../../libft.h"

int		test_ft_strlen(void);
int		test_ft_toupper(void);
int		test_ft_tolower(void);
int		test_ft_strcmp(void);
int		test_ft_strncmp(void);
int		test_ft_abs(void);
int		test_ft_intlen(void);
int		test_ft_itoa(void);
int		test_ft_isalpha(void);
int		test_ft_isdigit(void);
int		test_ft_isalnum(void);
int		test_ft_isascii(void);
int		test_ft_isprint(void);
int		test_ft_atoi(void);
int		test_ft_strcat(void);
int		test_ft_strncat(void);
int		test_ft_strstr(void);
int		test_ft_strnstr(void);
int		test_ft_strchr(void);
int		test_ft_strrchr(void);
int		test_ft_strlcat(void);
int		test_ft_strcpy(void);
int		test_ft_strncpy(void);
int		test_ft_strdup(void);
int		test_ft_strndup(void);
int		test_ft_memccpy(void);
int		test_ft_memset(void);
int		test_ft_bzero(void);
int		test_ft_memcpy(void);

int		test_ft_memalloc(void);
int		test_ft_memdel(void);
int		test_ft_strnew(void);
int		test_ft_strdel(void);
int		test_ft_strclr(void);
int		test_ft_striter(void);
int		test_ft_striteri(void);
int		test_ft_strmap(void);
int		test_ft_strmapi(void);
int		test_ft_strequ(void);
int		test_ft_strnequ(void);
int		test_ft_strjoin(void);
int		test_ft_strsub(void);
int		test_ft_strtrim(void);
int		test_ft_strsplit(void);
int		test_ft_putchar(void);
int		test_ft_putstr(void);
int		test_ft_putendl(void);
int		test_ft_putnbr(void);
int		test_ft_putchar_fd(void);
int		test_ft_putstr_fd(void);
int		test_ft_putendl_fd(void);
int		test_ft_putnbr_fd(void);

int		test_ft_lstnew(void);
int		test_ft_lstdelone(void);
int		test_ft_lstadd(void);
int		test_ft_lstdel(void);
int		test_ft_lstiter(void);
int		test_ft_lstmap(void);

int		test_ft_pow(void);

int		test_int(int ex, int test, char *name, char *test_id);
int		test_str(char *ex, char *test, char *name, char *test_id);
int		test_char(char ex, char test, char *name, char *test_id);
int		test_intarr(int len, int *ex, int *test, char *name, char *test_id);
int		test_mem(void *ex, void *test, size_t len, char *name, char *test_id);
int		test_ptr(void *ex, void *test, char *name, char *test_id);

#endif
