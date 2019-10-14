/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_flags.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thparlos <thparlos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/21 14:54:55 by thparlos          #+#    #+#             */
/*   Updated: 2019/09/22 16:56:29 by thparlos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_printf.h>

void    check_flags(const char *format, t_flags *flags, int *i)
{
    while (format[*i] == '#' || format[*i] == '+' || format[*i] == '0' || format[*i] == '-' || format [*i] == ' ')
    {
        format[*i] == '#' ? (flags->option_hashtag = 1) : (flags->option_hashtag = flags->option_hashtag);
        //Used with o, x or X specifiers the value is preceeded with 0, 0x or 0X respectively for values different than zero.
        //Used with a, A, e, E, f, F, g or G it forces the written output to contain a decimal point even if no more digits 
        //w. By default, if no digits follow, no decimal point is written.
        format[*i] == '-' ? (flags->option_left_justify = 1) : (flags->option_left_justify = flags->option_left_justify);
        //	Left-justify within the given field width; Right justification is the default (see width sub-specifier).
        format[*i] == '+' ? (flags->option_sign = 1) : (flags->option_sign = flags->option_sign);
        //	Forces to preceed the result with a plus or minus sign (+ or -) even for positive numbers.
        // By default, only negative numbers are preceded with a - sign.
        format[*i] == '0' ? (flags->option_padding = 1) : (flags->option_padding = flags->option_padding);   
        //	Left-pads the number with zeroes (0) instead of spaces when padding is specified (see width sub-specifier).
        format[*i] == ' ' ? (flags->option_space = 1) : (flags->option_space = flags->option_space);
        //If no sign is going to be written, a blank space is inserted before the value.
        i[0] = i[0] + 1;
    }
}

void    check_width(const char *format, t_flags *flags, int *i)
{
    char min_nbr_printed[64];

    ft_grep_first_number(format, i, min_nbr_printed);
    flags->min_nbr_printed = ft_atoi(min_nbr_printed);
}

void    check_precision(const char *format, t_flags *flags, int *i)
{
    char precision[64];
    
    if (format[i[0]] == '.')
    {
        *i = *i + 1;
        flags->precision_exist = 1;
        //pour dire auil y q precision mais ca peut etre juste le . sans nombre avec (precision indetermine)
        ft_first_number(format, i, precision);
        flags->precision = ft_atoi(precision);
    }
}

void    check_lenght1(const char *format, t_flags *flags, int * i)
{
    if (format[i[0]] == 'h' || format[i[0]] == 'l' || format[i[0]] == 'j' || format[i[0]] == 'z')
    {
        flags->lenght1 = format[i[0]];
        i[0] = i[0] + 1;
        if (format[i[0]] == 'h' || format[i[0]] == 'l')
        {
            flags->lenght2 = format[i[0]];
            *i = *i + 1;
        } 
        else flags->lenght2 == '\0';
    }
    else flags->lenght1 == '\0';
}

void    check_type(const char *format, t_flags *flags, int *i)
{
    if (type_checker(format[i[0]]))
    {
        flags->type = format[i[0]];
        i[0] = i[0] + 1;
    }
    else
        flags->type = '\0';
}