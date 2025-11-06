# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: stmaire <stmaire@student.42lyon.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/06 10:33:10 by stmaire           #+#    #+#              #
#    Updated: 2025/11/06 11:40:09 by stmaire          ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = cc
CFLAGS = -Werror -Wextra -Wall
SRCS = ./srcs/ft_putchar.c ./srcs/ft_putstr.c  ./srcs/ft_strcmp.c ./srcs/ft_strlen.c ./srcs/ft_swap.c
HEADER = ./includes/header.h
OBJ = $(SRCS:.c = .o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(OBJ) $(NAME)
%.o: %.c $(HEADER)
	$(CC) $(FLAGS) -c $< -o $@
clean:
	rm -f $(OBJ)
fclean: clean
	rm -f $(NAME)
re:
	fclean all
