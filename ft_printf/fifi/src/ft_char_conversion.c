/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_char_conversion.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thparlos <thparlos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/22 17:59:58 by thparlos          #+#    #+#             */
/*   Updated: 2019/09/23 17:42:32 by thparlos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_printf.h>

void	print_char(t_flags *flags, va_list list, int *i)
{
	int c;

	c = va_arg(list, int);
	if (flags->min_size - 1 > 0)
		i[1] += flags->min_size - 1;
	if (!flags->optmin)
	{
		if (flags->min_size - 1 > 0)
			ft_fulfill(flags, flags->min_size - 1);
		if (c >= 0 && c <= 255)
			ft_putchar((char)c);
	}
	else
	{
		if (c >= 0 && c <= 255)
			ft_putchar((char)c);
		if (flags->min_size - 1 > 0)
			ft_fulfill(flags, flags->min_size - 1);
	}
	i[1] += 1;
}

void    arg_char(t_flags *flags, va_list list, int *i)
{
    if (flags->type == 'C' || flags->lenght1 == 'l')
        arg_is_wchar(flags, list, i);
    else
        print_char(flags, list, i);
}