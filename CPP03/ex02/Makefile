# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jsaavedr <jsaavedr@student.42malaga.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/24 19:01:43 by jsaavedr          #+#    #+#              #
#    Updated: 2024/05/24 14:07:05 by jsaavedr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = FragTrap
SRCS = main.cpp ClapTrap.cpp FragTrap.cpp
OBJS = ${SRCS:.cpp=.o}
CC = clang++
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