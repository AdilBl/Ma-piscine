# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abelache <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/25 10:43:53 by abelache          #+#    #+#              #
#    Updated: 2021/08/26 11:20:02 by abelache         ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #


NAME = do-op

SRC = Main.c Operator.c

OBJ = ${SRC:.c=.o}

FLAGS = -Wall -Wextra -Werror

${NAME}: ${OBJ}
	gcc ${FLAGS} ${SRC} -o ${NAME} 

all: $(NAME)
 
clean:
	rm -f ${OBJ}
 
fclean: clean
	rm -f ${NAME}
 
re: fclean all

.PHONY: all clean fclean re
