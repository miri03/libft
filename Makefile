# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: meharit <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/08 20:54:32 by meharit           #+#    #+#              #
#    Updated: 2022/10/10 22:04:40 by meharit          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror
CFILES = $(wildcard *.c)
OBJ = $(CFILES:.c=.o)
RM = rm -f
LIBC = ar r
NAME = libft.a

all : $(NAME)

$(NAME) : $(OBJ)
	$(LIBC) $(NAME) $(OBJ)

%.o : %.c
	$(CC) $(CFLAGS) -o $@ -c $<
clean :
	$(RM) $(OBJ)
fclean: clean
	$(RM) $(NAME)
re: fclean all
