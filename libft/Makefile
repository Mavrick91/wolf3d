# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: maducham <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/01/25 19:44:23 by maducham          #+#    #+#              #
#    Updated: 2015/01/25 21:54:34 by maducham         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

CFLAGS = -Wall -Wextra -Werror

NAME = libft.a

SRC =		ft_putchar.c	\
			ft_putchar_fd.c	\
			ft_putstr.c		\
			ft_putstr_fd.c	\
			ft_putnstr.c	\
			ft_putnbr.c		\
			ft_putnbr_fd.c	\
			ft_putendl.c	\
			ft_putendl_fd.c	\
			ft_strlen.c		\
			ft_charlen.c	\
			ft_strdup.c		\
			ft_strcpy.c		\
			ft_strncpy.c	\
			ft_strcat.c		\
			ft_strncat.c	\
			ft_strlcat.c	\
			ft_strchr.c		\
			ft_strrchr.c	\
			ft_strstr.c		\
			ft_strnstr.c	\
			ft_strcmp.c		\
			ft_strncmp.c	\
			ft_memset.c		\
			ft_bzero.c		\
			ft_memcpy.c		\
			ft_memccpy.c	\
			ft_memmove.c	\
			ft_memchr.c		\
			ft_memcmp.c		\
			ft_atoi.c		\
			ft_isalpha.c	\
			ft_isdigit.c	\
			ft_isalnum.c	\
			ft_isascii.c	\
			ft_isprint.c	\
			ft_toupper.c	\
			ft_tolower.c	\
			ft_memalloc.c	\
			ft_memdel.c		\
			ft_strnew.c		\
			ft_strdel.c		\
			ft_strclr.c		\
			ft_striter.c	\
			ft_striteri.c	\
			ft_strmap.c		\
			ft_strmapi.c	\
			ft_strsub.c		\
			ft_strjoin.c	\
			ft_strtrim.c	\
			ft_strsplit.c	\
			ft_strdupc.c	\
			ft_strcpyc.c	\
			ft_strlenc.c	\
			ft_itoa.c		\
			ft_lstnew.c		\
			ft_lstdelone.c	\
			ft_lstdel.c		\
			ft_lstadd.c		\
			ft_lstiter.c	\
			ft_lstmap.c		\
			ft_error.c		\
			ft_errors.c		\
			ft_perror.c		\
			get_next_line.c	\
			ft_abs.c		\
			ft_cntchar.c	\
			ft_countnum.c	\
			ft_strsupr.c	\

OBJ = $(SRC:.c=.o)

CFLAGS += -I./includes

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(CLFAGS) $(NAME) $(OBJ)

clean:
	/bin/rm -rf $(OBJ)

fclean: clean
	/bin/rm -rf $(NAME) a.out

re: fclean all
