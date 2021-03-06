# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ljennife <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/02 22:55:39 by ljennife          #+#    #+#              #
#    Updated: 2020/11/03 18:32:04 by ljennife         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc -std=c99

RM = rm -f

FLAGS = -Wall -Wextra -Werror

SRC = ft_strlen.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c\
	  ft_isdigit.c ft_isprint.c ft_itoa.c ft_memccpy.c ft_memchr.c\
	  ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_putchar_fd.c\
	  ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_split.c\
	  ft_strchr.c ft_strdup.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c\
	  ft_atoi.c ft_strmapi.c ft_strncmp.c ft_strnstr.c ft_strrchr.c\
	  ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c

OBJS = ${SRC:.c=.o}

.c.o:
	${CC} ${FLAGS} -g -c $< -o ${<:.c=.o}

$(NAME): ${OBJS}
	ar rcs ${NAME} ${OBJS}

all: ${NAME}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re
