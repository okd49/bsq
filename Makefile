# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yuokada <yuokada@student.42tokyo.j>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/08 16:19:07 by yuokada           #+#    #+#              #
#    Updated: 2021/03/09 12:45:39 by yuokada          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bsq
CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRCS = main.c functions.c
INCLS = ft.h
NAME = bsq
OBJS = ${SRCS:.c=.o}

.c.o:
		${CC} ${CFLAGS} -c $< -o ${<:.c=.o} -I ${INCLS}

${NAME}: ${OBJS}
		${CC} ${CFLAGS} -o ${NAME} ${OBJS} -I ${INCLS}

clean:
	rm -f ${OBJS}

fclean: clean
	rm -f ${NAME}

re:		fclean all
