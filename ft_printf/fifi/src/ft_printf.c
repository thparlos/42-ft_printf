/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thparlos <thparlos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 10:59:10 by thparlos          #+#    #+#             */
/*   Updated: 2019/09/19 11:23:25 by thparlos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_printf.h>

int ft_printf(const char *format, ...)
{
    va_list list;
    va_list cp;
    int nbroctet;

    nbroctet = 0;
    if(check_exstr(format))
    //si le retour existe
    {
        va_start(list, format);
        va_copy(cp, list);
        if (ft_strchr(format, '%'))
            nbroctet = ft_find_flags(format, list);
        else
        {
            ft_putstr(format);
            nbroctet = ft_strlen(format);
        }
        va_end(list);
        va_end(cp);
    }
    return(nbroctet);
}