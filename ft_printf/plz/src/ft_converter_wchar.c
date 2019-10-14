/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_converter_wchar.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thparlos <thparlos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 10:01:42 by thparlos          #+#    #+#             */
/*   Updated: 2019/09/19 10:37:44 by thparlos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_printf.h>

void	print_wchar(va_list list, int *i)
{
	wchar_t c;

	c = va_arg(list, wchar_t);
	i[1] += ft_putwchar(c);
}

void	arg_is_wchar(t_flags *flags, va_list list, int *i)
{
    if (flags)
	    print_wchar(list, i);
}