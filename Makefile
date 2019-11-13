# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mberglun <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/02 17:10:30 by mberglun          #+#    #+#              #
#    Updated: 2019/11/13 13:22:54 by mikaelber        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror
NAME = testlib

# Directories, library and tests
SRC_DIR = srcs/
OBJ_DIR = objs/
OUT_DIR	= tests/

MKDIR_P = mkdir -p

# Files, library and tests
PART1 = ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c ft_memchr.c ft_memcmp.c \
		ft_strlen.c ft_strdup.c ft_strcpy.c ft_strncpy.c ft_strcat.c ft_strncat.c ft_strlcat.c \
		ft_strchr.c ft_strrchr.c ft_strstr.c ft_strnstr.c ft_strcmp.c ft_strncmp.c ft_atoi.c \
		ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_toupper.c ft_tolower.c

PART2 = ft_memalloc.c ft_memdel.c ft_strnew.c ft_strdel.c ft_strclr.c ft_striter.c ft_striteri.c \
		ft_strmap.c ft_strmapi.c ft_strequ.c ft_strnequ.c ft_strsub.c ft_strjoin.c ft_strtrim.c \
		ft_strsplit.c ft_itoa.c ft_putchar.c ft_putstr.c ft_putendl.c ft_putchar_fd.c ft_putstr_fd.c \
		ft_putendl_fd.c ft_putnbr_fd.c

PARTB = ft_lstnew.c ft_lstdelone.c ft_lstdel.c ft_lstadd.c ft_lstiter.c ft_lstmap.c

PART1_O	= $(addprefix $(OUT_DIR), $(PART1:.c=.out))
PART2_O	= $(addprefix $(OUT_DIR), $(PART2:.c=.out))
PARTB_O	= $(addprefix $(OUT_DIR), $(PARTB:.c=.out))

all: part1 part2 partb

part1: dirs $(PART1_O)
part2: dirs $(PART2_O)
partb: dirs $(PARTB_O)

$(PART1_O): $(OUT_DIR)%.out : $(SRC_DIR)%.c srcs/testers.c ../libft/libft.a
	$(CC) $(CFLAGS) $< srcs/testers.c -o $@ -L../libft/ -lft -I ./

$(PART2_O): $(OUT_DIR)%.out : $(SRC_DIR)%.c srcs/testers.c ../libft/libft.a
	$(CC) $(CFLAGS) $< srcs/testers.c -o $@ -L../libft/ -lft -I ./

$(PARTB_O): $(OUT_DIR)%.out : $(SRC_DIR)%.c srcs/testers.c ../libft/libft.a
	$(CC) $(CFLAGS) $< srcs/testers.c -o $@ -L../libft/ -lft -I ./

clean:
	-rm -rf $(OUT_DIR)

fclean: clean
	-rm -f $(NAME)

re: fclean all

# Creates necessary directories as needed, ex. for objects.
dirs: $(OUT_DIR)

$(OUT_DIR):
	$(MKDIR_P) $(OUT_DIR)
