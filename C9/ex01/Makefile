# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abelache <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/25 10:43:53 by abelache          #+#    #+#              #
#    Updated: 2021/08/26 09:57:15 by abelache         ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #


NAME = libft.a

SRC = ft_putchar.c ft_putstr.c ft_strcmp.c ft_swap.c ft_strlen.c

OBJ = $(addprefix srcs/, ${SRC:.c=.o})

.c.o:
	gcc -Wall -Wextra -Werror -c -I./includes $< -o ${<:.c=.o}

$(NAME): ${OBJ}
	ar -rcs $@ $^

all: $(NAME)
 
clean:
	rm -f ${OBJ}
 
fclean: clean
	rm -f ${NAME}
 
re: fclean all

.PHONY: all clean fclean re
