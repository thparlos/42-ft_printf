/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thparlos <thparlos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 10:55:37 by thparlos          #+#    #+#             */
/*   Updated: 2019/09/22 16:56:48 by thparlos         ###   ########.fr       */
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

#endif