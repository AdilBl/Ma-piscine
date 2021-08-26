# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alakhdar <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/21 11:57:20 by alakhdar          #+#    #+#              #
#    Updated: 2021/08/22 14:49:33 by alakhdar         ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

NAME = rush-02

SRC	= ft_reader.c string_functions.c nb_functions.c main.c
OBJ	= lib.h
FLAG = -Wall -Wextra -Werror

all	:	$(NAME)

$(NAME)	:
	gcc $(FLAG) -o $(NAME) $(SRC)

clean	:
	/bin/rm -f $(NAME)

fclean	:	clean
	/bin/rm -f $(OFILES)

re	: fclean all
