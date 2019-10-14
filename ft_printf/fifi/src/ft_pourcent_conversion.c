/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pourcent_conversion.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thparlos <thparlos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/21 17:50:09 by thparlos          #+#    #+#             */
/*   Updated: 2019/09/21 17:55:42 by thparlos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_printf.h>

void    arg_pourcent(t_flags *flags, int *i)
{
    if (flags->type == '%')
    {
        flags->min_nbr_printed - 1 > 0 ? 
        (fulfill(flags, flags->min_nbr_printed - 1), i[1] = i[1] + flags->min_nbr_printed - 1)
        : (i[1] = i[1]);
        ft_putchar('%');
        i[1] = i[1] + 1;
    }
}