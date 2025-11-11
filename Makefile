#SETTINGS#

SRC=ft_printf.c

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
