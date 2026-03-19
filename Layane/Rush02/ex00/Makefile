# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lsouza-a <lsouza-a@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/03/14 16:33:33 by lsouza-a          #+#    #+#              #
#    Updated: 2026/03/14 19:14:21 by lsouza-a         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME    = rush-02
CC        = gcc
FLAGS    = -Wall -Wextra -Werror
SRCS    = main.c convert.c dict.c utils.c verify.c
OBJS    = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
    $(CC) $(FLAGS) -o $(NAME) $(OBJS)

%.o: %.c
    $(CC) $(FLAGS) -c $< -o $@

clean:
    rm -f $(OBJS)

fclean: clean
    rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
