# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: thparlos <thparlos@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/19 10:54:43 by thparlos          #+#    #+#              #
#    Updated: 2019/10/12 11:16:11 by thparlos         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libftprintf.a

SRC		= ./src/*.c ./libft/*.c

OBJ		= $(SRC:.c=.o)
CFLAG	= -Wall -Wextra -Werror
HEADER	= includes/

all: $(NAME)

$(NAME):
	gcc $(CFLAG) -c -I$(HEADER) -I ./libft $(SRC)
	ar rc $(NAME) *.o
	ranlib $(NAME)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all