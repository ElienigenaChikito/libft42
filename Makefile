# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eoteros- <eoteros-@student.42barcelon      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/07 13:26:53 by eoteros-          #+#    #+#              #
#    Updated: 2025/04/03 13:50:38 by eoteros-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = cc
CFLAGS = -Wall -Wextra -Werror -c

SRC = ft_isalpha.c ft_isalnum.c ft_isprint.c ft_isascii.c ft_isdigit.c\
      ft_tolower.c ft_toupper.c ft_bzero.c\
      ft_memset.c ft_memcpy.c ft_memmove.c ft_memchr.c ft_memcmp.c\
      ft_strlen.c ft_strlcat.c ft_strchr.c ft_strrchr.c ft_strncmp.c\
      ft_strlcpy.c ft_strnstr.c ft_strdup.c\
      ft_atoi.c ft_calloc.c\
      \
      ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c\
      ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c\
      ft_putnbr_fd.c

BONUS_SRC = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c\
			ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c\
			ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c\

OBJS = $(SRC:%.c=%.o)
BONUS_OBJS = $(BONUS_SRC:%.c=%.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) rcs $(NAME) $(OBJS)

bonus: $(OBJS) $(BONUS_OBJS)
	$(AR) rcs $(NAME) $(OBJS) $(BONUS_OBJS)

%.o: %.c libft.h
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -rf $(OBJS) $(BONUS_OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus
