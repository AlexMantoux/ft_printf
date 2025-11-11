#SETTINGS#
SRC_DIR=.

SRC=$(SRC_DIR)/ft_atoi.c \
$(SRC_DIR)/ft_isalpha.c \
$(SRC_DIR)/ft_isdigit.

#SRC = $(LIBC)#
CC = gcc

CFLAGS = -Werror -Wextra -Wall -I ./

NAME = libftprintf.a

OBJ = $(SRC:.c=.o)

.PHONY: all clean flcean re

#RULES#
all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
