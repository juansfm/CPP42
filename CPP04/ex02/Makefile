# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jsaavedr <jsaavedr@student.42malaga.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/24 13:46:30 by jsaavedr          #+#    #+#              #
#    Updated: 2024/05/30 16:02:09 by jsaavedr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Animal
SRCS = main.cpp Animal.cpp Dog.cpp Cat.cpp Brain.cpp
OBJS = ${SRCS:.cpp=.o}
CC = g++
FLAGS = -Wall -Wextra -Werror -std=c++98

all: ${NAME}

${NAME}: ${OBJS}
	${CC} ${FLAGS} ${OBJS} -o ${NAME}

%.o: %.cpp
	${CC} ${FLAGS} -c $< -o $@

clean:
	rm -rf ${OBJS}

fclean: clean
	rm -rf ${NAME}

re: fclean all

.PHONY: all clean fclean re