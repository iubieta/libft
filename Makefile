# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: iubieta- <iubieta-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/22 15:38:39 by iubieta-          #+#    #+#              #
#    Updated: 2023/10/14 17:38:43 by iubieta-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRCS = $(shell find "." -name "*.c")			
OBJS = ${SRCS:.c=.o}
CC = gcc
FLAGS = -Wall -Wextra -Werror
AR = ar csr
RM = rm -rf

.c.o :
	@${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

all : ${OBJS}
	@${AR} ${NAME} ${OBJS}

clean :
	@${RM} ${OBJS}

fclean : clean
	@${RM} ${NAME}

re : fclean all

.PHONY: all clean fclean re .c.o