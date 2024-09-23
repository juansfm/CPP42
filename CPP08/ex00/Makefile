# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jsaavedr <jsaavedr@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/12 20:45:11 by juan              #+#    #+#              #
#    Updated: 2024/09/22 16:53:54 by jsaavedr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = easyfind
SRCS = main.cpp
OBJS = ${SRCS:.cpp=.o}
CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98

all: ${NAME}

${NAME}: ${OBJS}
	${CC} ${FLAGS} ${OBJS} -o ${NAME}

%.o: %.cpp
	${CC} ${FLAGS} -c $< -o $@

clean :
	rm -f ${OBJS}

fclean : clean
	rm -f ${NAME}

re : fclean all

.PHONY: all clean fclean re