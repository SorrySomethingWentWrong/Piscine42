# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tramet <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/15 15:09:21 by tramet            #+#    #+#              #
#    Updated: 2018/09/16 21:12:39 by mybenzar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAGS=-Wall -Wextra -Werror

: compile

compile:
	@ gcc $(CFLAGS) -c main.c ft_read.c ft_print.c ft_link_tools.c rush00.c
		rush01.c rush02.c rush03.c rush04.c s_struct.h
	@ gcc -o colle-2 *.o

fclean:
	@ rm -rf *.o
	@ rm -rf colle-2
