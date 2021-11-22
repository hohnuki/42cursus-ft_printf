# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hohnuki <hohnuki@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/18 16:27:58 by ohnukihirok       #+#    #+#              #
#    Updated: 2021/11/22 20:16:10 by hohnuki          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRCS = ft_isdigit.c ft_printf.c ft_put_address.c ft_putbit_lowercase.c \
		ft_putbit_uppercase.c ft_putchar.c ft_putnbr_ui.c ft_putnbr.c \
		ft_putstr.c ft_strlen.c
OBJS = $(SRCS:.c=.o)

CFLAGS = -Wall -Werror -Wextra
CC = gcc -c
RM = rm -f
AR = ar rc

all : $(NAME)

$(NAME) : $(OBJS)
	$(AR) $(NAME) $(OBJS)
	ranlib $(NAME)

$(OBJS) : $(SRCS)
	$(CC) $(CFLAGS) $(SRCS)

clean :
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re : fclean all

.PHONY : all clean fclean re
