# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: toavandr <toavandr@student.42antananari    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/02/19 21:07:01 by toavandr          #+#    #+#              #
#    Updated: 2026/02/19 21:10:49 by toavandr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libfprintf.a
CC = cc
FLAGS = -Wall -Werror -Wextra
HEADER = ft_printf.h

SRC = ft_format.c ft_printf.c ft_putchar.c \
	  ft_putnbr.c ft_putnbrbase.c ft_putstr

OBJ = $(SRC:.c=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	ar -rcs $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY : all re clean fclean
