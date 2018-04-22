# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sshiling <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/10/02 13:01:36 by sshiling          #+#    #+#              #
#    Updated: 2017/10/08 23:08:21 by sshiling         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = rush-2

SRCS = main.c char_rush00.c char_rush01.c char_rush02.c char_rush03.c char_rush04.c columns.c ft_putnbr.c ft_putstr.c ft_strcmp.c int_array.c printer.c result.c rows.c writer.c memory.c

OBJECTS = main.o char_rush00.o char_rush01.o char_rush02.o char_rush03.o char_rush04.o columns.o ft_putnbr.o ft_putstr.o ft_strcmp.o int_array.o printer.o result.o rows.o writer.o memory.o

all: $(NAME)

$(NAME):
	gcc -I -Wall -Werror -Wextra -c $(SRCS)
	gcc $(OBJECTS) -o $(NAME)

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all
