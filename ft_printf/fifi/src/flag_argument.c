/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flag_argument.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thparlos <thparlos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 11:21:05 by thparlos          #+#    #+#             */
/*   Updated: 2019/10/12 10:56:37 by thparlos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void    inti_flags(const char *format, t_flags *flags, int *i)
{
    *i = *i + 1;
    check_flags(format, flags, i);
    check_width(format, flags, i);
    check_precision(format, flags, i);
    check_lenght1(format, flags, i);
    check_type(format, flags, i);
}

void    ft_type(t_flags *flags, va_list list, int *i)
{
    if (flags->type == '%')
        arg_pourcent(flags, i);
    if (flags->type == 's' || flags->type == 'S')
        arg_is_string(flags, list, i);
    if (flags->type == 'c' || flags->type == 'C')
        arg_char(flags, list, i);
    if (flags->type == 'd' || flags->type == 'i' || flags->type == 'D')
        arg_is_int(flags, list, i);
    if (flags->type == 'p')
        arg_is_ptr(flags, list, i);
    if (flags->type == 'x' || flags->type == 'X')
        arg_is_x(flags, list, i);
    if (flags->type == 'o' || flags->type == 'O')
        arg_is_octal(flags, list, i);
    if (flags->type == 'u' || flags->type == 'U')
        arg_is_unsigned(flags, list, i);
}

void    ft_type_flags(const char *str, t_flags *flags, va_list list, int *i)
{
    if (flags->type != '\0')
        ft_type(flags, list, i);
    else
    {
		if (flags->min_nbr_printed - 1 > 0)
		{
			if (!(flags->option_sign))
			{
				ft_fulfill(flags, flags->min_nbr_printed - 1);
				i[1] += flags->min_nbr_printed - 1;
			}
			else
			{
				ft_putchar(str[i[0]]);
				i[1] += flags->min_nbr_printed;
				i[0] += 1;
				ft_fulfill(flags, flags->min_nbr_printed - 1);
			}
		}
	}
}

int ft_find_flags(const char *format, va_list list)
{
    int i[2];
    //cc'est comme creer 2int (normefixer)
    t_flags flags;

    i[0] = 0;
    i[1] = 0;
    while (format[i[0]] != '\0')
    {
        if (format[i[0]] == '%')
        {
            ft_bzero(&flags, sizeof(t_flags));
            inti_flags(format, &flags, i);
            ft_type_flags(format, &flags, list, i);
        }
        else
        {
            ft_putchar(format[i[0]]);
            i[1] = i[1] + 1;
            i[0] = i[0] + 1;
        }
        
    }
    return (i[1]);
}