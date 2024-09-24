# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kkusunok <kkusunok@student.42tokyo.jp>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/11 16:26:00 by kkusunok          #+#    #+#              #
#    Updated: 2024/09/24 16:25:40 by kkusunok         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = printf.a

CC = cc
CFLAGS = -Wall -Wextra -Werror

SRCS = ft_printf.c ft_printf_char.c ft_printf_str.c ft_printf_ptr.c \
ft_printf_int.c ft_printf_unsigned.c ft_printf_hex.c \
ft_itoa.c ft_strlen.c

OBJS = $(SRCS:.c=.o)

RM = rm -f

#default target
all: $(NAME)

#library
$(NAME): $(OBJS)
	$(AR) rcs $@ $^

#compile
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

#clean
clean:
	$(RM) $(OBJS)
fclean: clean
	$(RM) $(NAME)
re: fclean all

.PHONY : all clean fclean re
