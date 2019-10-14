# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: thparlos <thparlos@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/19 10:54:43 by thparlos          #+#    #+#              #
#    Updated: 2019/10/12 11:13:30 by thparlos         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #



CC = gcc

FLAGS = -Wall -Wextra -Werror

SRC_PATH=./src/

C = flag_argument.c ft_char_conversion.c ft_check_flags.c ft_int_conversion.c\
	ft_octal_conversion.c ft_pourcent_conversion.c ft_print_conversion.c\
	ft_print_operator.c ft_printf.c ft_ptr_conversion.c ft_string_conversion.c\
	ft_unsigned_conversion.c ft_wstring_conversion.c ft_x_connversion.c

O = $(C:.c=.o)

I = ft_printf.h

all : $(NAME)

$(NAME): $(O)
	make -C libft/
	$(CC) $(FLAGS) -o $(NAME) $(O) -L libft/

%.o : $(SRC_PATH)%.c
	$(CC) $(FLAGS) -c $< -o $@

clean :
	rm -rf $(O)
	make -C libft/ clean

fclean : clean
	make fclean -C libft/
	rm -rf $(NAME)

re : fclean all

.PHONY: all lib clean flean re