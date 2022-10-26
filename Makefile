# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: meharit <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/08 20:54:32 by meharit           #+#    #+#              #
#    Updated: 2022/10/26 02:25:56 by meharit          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror

RM = rm -f

LIBC = ar -rc

CFILES = ft_bzero.c \
		 ft_atoi.c \
	 	ft_isalpha.c \
	 	ft_isdigit.c \
		ft_strlcpy.c \
		ft_strlen.c \
	 	ft_memcpy.c \
	 	ft_memmove.c \
	 	ft_memcmp.c \
	 	ft_strnstr.c \
	 	ft_calloc.c \
	 	ft_isalnum.c \
	 	ft_isascii.c \
	 	ft_isprint.c \
	 	ft_memchr.c \
	 	ft_memset.c \
	 	ft_strchr.c \
	 	ft_strdup.c \
	 	ft_strlcat.c \
	 	ft_strncmp.c \
	 	ft_strrchr.c \
	 	ft_tolower.c \
	 	ft_toupper.c \
	 	ft_substr.c \
	 	ft_strjoin.c \
	 	ft_strtrim.c \
	 	ft_split.c \
	 	ft_itoa.c \
		ft_strmapi.c \
	 	ft_striteri.c \
	 	ft_putchar_fd.c \
	 	ft_putstr_fd.c \
	 	ft_putendl_fd.c \
	 	ft_putnbr_fd.c \

CBONUS = ft_lstnew.c \
		 ft_lstadd_front.c \
		 ft_lstsize.c \
		 ft_lstlast.c \
		 ft_lstadd_back.c \
		 ft_lstdelone.c \
		 ft_lstclear.c \
		 ft_lstiter.c \

OBJ = $(CFILES:.c=.o)

OBONUS = $(CBONUS:.c=.o)

all : $(NAME)

bonus : $(OBONUS)

$(OBONUS) : $(CBONUS)
	$(CC) $(CFLAGS) -c $(CBONUS)
	$(LIBC) $(NAME) $(OBONUS)

$(NAME) : $(OBJ)
	$(LIBC) $(NAME) $(OBJ)

$(OBJ) :  $(CFILES)
	$(CC) $(CFLAGS) -c $(CFILES)

clean :
	$(RM) $(OBJ) $(OBONUS)

fclean: clean
	$(RM) $(NAME)

re: fclean all 
