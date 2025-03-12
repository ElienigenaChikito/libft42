# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eoteros- <eoteros-@student.42barcelon      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/07 13:26:53 by eoteros-          #+#    #+#              #
#    Updated: 2025/02/20 13:37:50 by eoteros-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror -c

SRC = ft_isalpha.c ft_isalnum.c ft_isprint.c ft_isascii.c ft_isdigit.c\
      ft_tolower.c ft_toupper.c ft_bzero.c\
      ft_memset.c ft_memcpy.c ft_memmove.c ft_memchr.c ft_memcmp.c\
      ft_strlen.c ft_strlcat.c ft_strchr.c ft_strrchr.c ft_strncmp.c\
      ft_strlcpy.c ft_strnstr.c ft_strdup.c\
      ft_atoi.c ft_calloc.c\
      \
      ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c\
      ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c\
      ft_putendl_fd.c ft_putnbr_fd.c\
      
OBJS = $(SRC:%.c=%.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) $(SRC)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all
