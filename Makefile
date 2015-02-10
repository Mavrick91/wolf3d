# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: maducham <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/01/22 16:06:13 by maducham          #+#    #+#              #
#    Updated: 2015/01/25 18:22:27 by maducham         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: libft clean fclean re

NAME = wolf

SRC_C = ft_hook.c \
		ft_tab.c \
		main.c \
		pixel_put.c \
		put_inf.c \
		floor_sky.c \

SRC_O = $(SRC_C:.c=.o)

SRC_H = wolf.h \

FLAG = -Wall -Wextra -Werror

LIB = -L.. -lmlx -L/usr/include/../lib -lXext -lX11 -lm

all: $(NAME)

$(NAME): $(SRC_O)
	make -C libft/
	gcc $(FLAG) -o $(NAME) $^ $(LIB)

%.o: %.c
	gcc $(FLAG) -I libft/includes/ -c $<

clean:
	make -C libft/ clean
	rm -f $(SRC_O)

fclean: clean
	make -C libft/ fclean
	rm -f $(NAME)

re: fclean all
