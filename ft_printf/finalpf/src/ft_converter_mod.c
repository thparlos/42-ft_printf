/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_converter_mod.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thparlos <thparlos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 09:59:21 by thparlos          #+#    #+#             */
/*   Updated: 2019/09/19 09:59:30 by thparlos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_printf.h>

void arg_is_mod(t_flags *flags, int *i)
{
	if (flags->type == '%')
	{
		flags->min_size - 1 > 0 ? (fill_it(flags, flags->min_size - 1), \
				i[1] += flags->min_size - 1) : (i[1] += 0);
		ft_putchar('%');
		i[1] += 1;
	}
}