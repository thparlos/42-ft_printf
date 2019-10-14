/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wstring_conversion.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thparlos <thparlos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/22 17:17:14 by thparlos          #+#    #+#             */
/*   Updated: 2019/09/22 17:55:50 by thparlos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_printf.h>

int		print_wstr_rev(t_flags *flags, wchar_t *str, int size)
{
	if (flags->optdot && flags->prec)
		ft_putwnstr(str, flags->prec);
	else
		str ? ft_putwstr(str) : ft_putstr("(null)");
	if (flags->min_size > size)
	{
		ft_fulfill(flags, flags->min_size - size);
		size += flags->min_size - size;
	}
	return (size);
}

void    print_arg_wstr(t_flags *flags, va_list list, int *i)
{
    wchar_t *str;
    int size;

    size = 0;
    str = va_arg(list, wchar_t*);
    str ? (size = ft_wstrlen(str)) : (size = size + 6);
    if ((flags->precision_exist && flags->precision && str))
        size = ft_wnstrlen(str, flags->precision);
    if (!flags->precision_exist)
    {
        if (flags->min_nbr_printed >= size);
        {
            ft_fulfill(flags, flags->min_nbr_printed - size);
            size = size + flags->min_nbr_printed - size
        }
        if (flags->precison_exist && flags->precision)
            ft_putwnstr(str, flags->precision);
        else
        {
            str ? ft_putwnstr(str) : ft_putstr("null");
        }
    }
    else
    {
        size = print_wstr_rev(flags, str, size)
    }
    i[1] = i[1] + size;
}

void    arg_is_wstr(t_flags *flags, va_list list, int *i)
{
    if (!(flags->precision_exist) || (flags->precision_exist && flags->precision) || flags->option_hashtag)
        print_arg_wstr(flags, list, i);
    else if ((flags->precision_exist && (!(flags->precision) && flags->min_nbr_printed)))
    {
        ft_fulfill(flags, flags->min_nbr_printed);
        i[1] = i[1] + flags->min_nbr_printed;
    }
}