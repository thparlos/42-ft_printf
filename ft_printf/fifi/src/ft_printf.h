/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thparlos <thparlos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 10:55:37 by thparlos          #+#    #+#             */
/*   Updated: 2019/10/12 11:05:01 by thparlos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <stdlib.h>

typedef struct s_flags
{
    char    option_hashtag;
    char    option_left_justify;
    char    option_sign;
    char    option_padding;
    char    option_space;
    int     min_nbr_printed;
    int     precision;
    int     precison_exist;
    char    lenght1;
    char    lenght2;
    char    type;
    
}   t_flags;

int ft_printf(const char *format, ...);
int ft_find_flags(const char *str, va_list list);
void    check_flags(const char *format, t_flags *flags, int *i);
void    check_width(const char *format, t_flags *flags, int *i);
void    check_precision(const char *format, t_flags *flags, int *i);
void    check_lenght1(const char *format, t_flags *flags, int * i);
void    check_type(const char *format, t_flags *flags, int *i);
void    arg_char(t_flags *flags, va_list list, int *i);
void    arg_is_int(t_flags *flags, va_list list, int *i);
void	arg_is_octal(t_flags *flags, va_list list, int *i);
void    arg_pourcent(t_flags *flags, int *i);
void	arg_is_ptr(t_flags *flags, va_list list, int *i);
void    arg_is_string(t_flags *flags, va_list list, int *i);
void	arg_is_unsigned(t_flags *flags, va_list list, int *i);
void    arg_is_wstr(t_flags *flags, va_list list, int *i);
void	arg_is_x(t_flags *flags, va_list list, int *i);

#endif