# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: thparlos <thparlos@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/12 09:41:54 by thparlos          #+#    #+#              #
#    Updated: 2019/10/12 11:12:33 by thparlos         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc

FLAGS = -Wall -Wextra -Werror

C = ft_atoi.c ft_bzero.c ft_fulfill.c ft_isdigit.c ft_itoa.c ft_nbrlen.c\
	ft_putchar.c ft_putnbr.c ft_putstr.c ft_putwnstr.c ft_putwstr.c\
	ft_strchr.c ft_strlen.c ft_wcharlen.c ft_wnstrlen.c ft_wstrlen.c

O = $(C:.c=.o)

I = libft.h

all : $(NAME)

$(NAME): $(O)
	ar rc $(NAME) $(O)
	ranlib $(NAME)

%.o : %.c
	$(CC) $(FLAGS) -c $< -o $@

clean :
	rm -rf $(O)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY: all re clean fclean
