# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kkusunok <kkusunok@student.42tokyo.jp>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/11 16:26:00 by kkusunok          #+#    #+#              #
#    Updated: 2025/01/03 15:13:37 by kkusunok         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = cc
CFLAGS = -Wall -Wextra -Werror

AR = ar
LIBFT = ./libft/libft.a

SRCS = ft_printf.c ft_printf_char.c ft_printf_str.c ft_printf_ptr.c \
ft_printf_int.c ft_printf_unsigned.c ft_printf_hex.c

OBJS = $(SRCS:.c=.o)

RM = rm -f

# default target
all: $(NAME)

# libft
$(LIBFT):
	make -C ./libft

# library
$(NAME): $(OBJS) $(LIBFT)
	$(AR) x $(LIBFT)
	$(AR) rcs $@ $(OBJS) *.o
	$(RM) *.o ./libft/*.o

# compile
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# clean
clean:
	$(RM) $(OBJS)
	- make clean -C ./libft

fclean: clean
	$(RM) $(NAME)
	- make fclean -C ./libft

re: fclean all

.PHONY: all clean fclean re $(LIBFT)
