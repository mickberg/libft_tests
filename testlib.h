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
#include <math.h>
#include <ctype.h>
#include "../libft/libft.h"

int		test_int(int ex, int test, char *name, char *test_id);
int		test_str(char *ex, char *test, char *name, char *test_id);
int		test_char(char ex, char test, char *name, char *test_id);
int		test_intarr(int len, int *ex, int *test, char *name, char *test_id);
int		test_mem(void *ex, void *test, size_t len, char *name, char *test_id);
int		test_ptr(void *ex, void *test, char *name, char *test_id);

#endif
