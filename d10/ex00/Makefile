# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ckumera <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/15 17:52:43 by ckumera           #+#    #+#              #
#    Updated: 2019/07/15 19:16:59 by ckumera          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = srcs/

INCLUDES = includes/

FLAGS = -c -Wall -Wextra -Werror

all: create

create:
	gcc $(FLAGS) $(addprefix $(SRC), ft_putchar.c ft_putstr.c ft_strcmp.c ft_strlen.c ft_swap.c)
	mv ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o $(INCLUDES)
	ar rc $(NAME) $(addprefix $(INCLUDES), ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o)
	ranlib $(NAME)

clean:
	rm -f includes/*.o

fclean: clean
	rm -rf $(NAME)

re: fclean all
