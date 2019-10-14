/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string_conversion.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thparlos <thparlos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/21 18:14:04 by thparlos          #+#    #+#             */
/*   Updated: 2019/09/22 17:13:45 by thparlos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_printf.h>

void    print_arg_string(t_flags flags, va_list list, int *i)
{
    char *str;
    int size;

    str = NULL;
    str = va_arg(list, char *);
    str ? (size = ft_strlen(str)) : (size = 6);

    if (str || (!(flags->min_nbr_printed)))
    {
        if (flags->precison_exist && (!(flags->pecision)))
            size = 0;
        if (size < flags->min_nbr_printed)
        {
            ft_fulfill(flags, flags->min_nbr_printed - size);
            size = size + flags->min_nbr_printed - size;
        }
        if (!(flags->precison_exist)) || (flags->precision && flags->precision_exist))
            str ? ft_putstr(str) : ft_putstr("null");
        i[1] = i[1] + size;
    }
    else
    {
        ft_fulfill(flags, flags->min_nbr_printed);
        i[1] = i[1] + flags->min_nbr_printed;
    }
}

void    arg_is_string(t_flags *flags, va_list list, int *i)
{
    if ((!(flags->precision_exist)) || (flags->precision_exist && flags->precision) || flags->min_nbr_printed)
    {
        if ((flags->type == 's' && flags->lemght1 == 'l' || flags->type == 'S'))
            arg_is_wstr(flags, list, i);
        else
            print_arg_string(flags, list, i);
    }
}    