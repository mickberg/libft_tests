# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mberglun <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/02 17:10:30 by mberglun          #+#    #+#              #
#    Updated: 2019/11/20 19:40:32 by mberglun         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror

# Directories, library and tests
TEST_DIR = tests/
OUT_DIR	= bins/
SRC_DIR = ../getnextline/
LIBFT_DIR = $(SRC_DIR)libft/

LIB = $(LIBFT_DIR)libft.a
MKDIR_P = mkdir -p

# Files, library and tests
SRCS = get_next_line.c
SRC_FILES = $(addprefix $(SRC_DIR), $(SRCS))
SRC_OBJ = $(addprefix $(OUT_DIR), $(SRCS:.c=.o))
TESTF = testers.c
TEST_FILES = $(addprefix $(TEST_DIR), $(TESTF))

PART1 = test1.c basic.c

# TESTS
PART1_O	= $(addprefix $(OUT_DIR), $(PART1:.c=.out))

all: part1

part1: dirs $(LIB) $(PART1_O)

# MAKE libft.a
$(LIB):
	make -C $(LIBFT_DIR) fclean && make -C $(LIBFT_DIR)

# COMPILE SOURCE FILES FIRST
$(SRC_OBJ): $(OUT_DIR)%.o : $(SRC_DIR)%.c $(SRC_FILES)
	$(CC) $(CFLAGS) -I $(SRC_DIR) -o $@ -c $<

# THEN COMPILE TEST FILES
$(PART1_O): $(OUT_DIR)%.out : $(TEST_DIR)%.c $(SRC_OBJ)
	$(CC) $(CFLAGS) $(SRC_OBJ) $< $(SRC_OBJS) $(TEST_FILES) -o $@ -L$(LIBFT_DIR) -lft -I ./

clean:
	-rm -rf $(SRC_OBJ)

fclean: clean
	-rm -rf $(OUT_DIR)

re: fclean all

# Creates necessary directories as needed, ex. for objects.
dirs: $(OUT_DIR)

$(OUT_DIR):
	$(MKDIR_P) $(OUT_DIR)
