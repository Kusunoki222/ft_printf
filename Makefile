# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kkusunok <kkusunok@student.42tokyo.jp>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/13 17:30:32 by kkusunok          #+#    #+#              #
#    Updated: 2024/06/13 17:30:35 by kkusunok         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = printf.a

CC = cc
CFLAGS = -Wall -Wextra -Werror

SRCS = 

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

.PHONY : all clean fclean re bonus
