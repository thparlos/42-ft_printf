# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: thparlos <thparlos@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/19 09:52:24 by thparlos          #+#    #+#              #
#    Updated: 2019/10/12 12:20:16 by thparlos         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC_PATH=./src/
SRC_NAME=ft_argument.c\
ft_atoi.c\
ft_bzero.c\
ft_check.c\
ft_converter_char.c\
ft_converter_int.c\
ft_converter_longi.c\
ft_converter_mod.c\
ft_converter_o.c\
ft_converter_p.c\
ft_converter_str.c\
ft_converter_unsigned.c\
ft_converter_us.c\
ft_converter_wchar.c\
ft_converter_x.c\
ft_filler.c\
ft_memalloc.c\
ft_misc.c\
ft_print_wchar.c\
ft_printf.c\
ft_isdigit.c\
ft_linttooct.c\
ft_longnbrlen.c\
ft_nbrlen.c\
ft_putchar.c\
ft_putlongnbr.c\
ft_putnbr.c\
ft_putstr.c\
ft_putwnstr.c\
ft_itoa.c\
ft_putwstr.c\
ft_strchr.c\
ft_strdup.c\
ft_strcpy.c\
ft_strlen.c\
ft_wcharlen.c\
ft_wnstrlen.c\
ft_wstrlen.c\
ft_octal_err.c\
ft_fillint.c

OBJ_PATH =./obj/
OBJ_NAME=$(SRC_NAME:.c=.o)
INC_PATH=./includes/
INC_NAME=libft.h\
		ft_printf.h
SRC=$(addprefix $(SRC_PATH), $(SRC_NAME))
OBJ=$(addprefix $(OBJ_PATH), $(OBJ_NAME))
INCF=$(addprefix $(INC_PATH), $(INC_NAME))
INC=$(addprefix -I, $(INC_PATH))
CFLAGS=-Wall -Wextra -Werror
CC=-gcc
NAME=libftprintf.a

all: $(NAME)

$(NAME):$(OBJ)
	@echo "Compile $(NAME) with $(CFLAGS)${NC}";
	@echo "ar rc $(NAME)${NC}"
	@ar rc $(NAME) $(OBJ)
	@echo "ranlib $(NAME)${NC}"
	@ranlib $(NAME)

$(OBJ_PATH)%.o: $(SRC_PATH)%.c
	@mkdir -p $(OBJ_PATH)
	@echo "Create bynary $@ with $<${NC}";
	@$(CC) $(CFLAGS) $(INC) -o $@ -c $<

clean:
	@echo "Delete OBJ files"
	@rm -rf $(OBJ_PATH)

fclean: clean
	@echo "Delete $(NAME) file${NC}"
	@rm -rf $(NAME)

re: fclean all clean

.PHONY: all clean fclean re