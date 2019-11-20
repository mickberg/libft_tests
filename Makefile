# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mberglun <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/02 17:10:30 by mberglun          #+#    #+#              #
#    Updated: 2019/11/19 21:48:07 by mikaelber        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror
NAME = testlib

# Directories, library and tests
TEST_DIR = tests/
OUT_DIR	= bins/
MKDIR_P = mkdir -p

SRC_DIR = ../getnextline/
LIBFT_DIR = $(PROD_DIR)libft/

# Files, library and tests
SRCS = get_next_line.c
TEST_FILES = testers.c
PART1 = test1.c

SRC_FILES = $(addprefix $(SRC_DIR), $(SRCS))
SRC_OBJ = $(addprefix $(OUT_DIR), $(SRCS:.c=.o))

PART1_O	= $(addprefix $(OUT_DIR), $(PART1:.c=.out))

all: part1

part1: dirs $(SRC_OBJ)

# COMPILE SOURCE FILES FIRST
$(SRC_OBJ): $(OUT_DIR)%.o : $(SRC_DIR)%.c $(SRC_FILES)
	$(CC) $(CFLAGS) -I $(LIBFT_DIR) -o $@ -c $<

$(PART1_O): $(OUT_DIR)%.out : $(SRC_DIR)%.c $(SRC_OBJS)
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
