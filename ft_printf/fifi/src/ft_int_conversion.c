/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_int_conversion.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thparlos <thparlos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/23 17:49:54 by thparlos          #+#    #+#             */
/*   Updated: 2019/09/23 18:01:27 by thparlos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_printf.h>

void    ft_print_int(t_flags *flags, va_list list, int *i)
{
    int c;
    int size;

    	cast_int(&c, list, flags);
	if (flags->prec || flags->min_size)
		size = print_int_fulfill(flags, i, c);
	else
	{
		if (flags->optspace && ((!flags->optplus)) && c > 0)
		{
			ft_putchar(' ');
			i[1]++;
		}
		size = ft_nbrlen(c);
		if (c < 0)
			size += 1;
		if (c > 0 && flags->optplus)
		{
			ft_putchar('+');
			size += 1;
		}
		ft_putnbr(c);
	}
	i[1] += size;
}

void    arg_is_int(t_flags *flags, va_list list, int *i)
{
    if (!(flags->precision_exist) || (flags->precision_exist && flags->precision) || flags->option_hashtag)
    {
        if ((flags->lenght1 == 'l') || (flags->type == 'D') || (flags->lenght1 == 'j') || (flags->lenght1 == 'z'))
            arg_is_long_int(flags, list, i);
        else
            ft_print_int(flags, list, i);
    }
}