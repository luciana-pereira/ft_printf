# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lucperei <lucperei@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/03 00:35:20 by lucperei          #+#    #+#              #
#    Updated: 2022/07/30 23:57:54 by lucperei         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRC = ft_printf.c    	   \
	  ft_print_char.c      \
	  ft_print_str.c       \
	  ft_print_pointer.c   \
	  ft_print_uns.c       \
	  ft_print_hex.c       \
	  ft_strlen.c    	   \
	  ft_putchar.c

CC = cc
FLAGS = -c -Wall -Wextra -Werror

AR = ar rcs
RM = rm -f

OBJS = $(SRC:.c=.o)

$(NAME): $(OBJS) 
				$(CC) $(FLAGS) $(SRC)
				$(AR) $(NAME) $(OBJS)

all: $(NAME)

clean:
				$(RM) $(OBJS)
				
fclean: clean
				$(RM) $(NAME)
				
re: fclean all

.PHONY: all clean fclean re