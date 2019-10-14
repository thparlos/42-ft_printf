/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fulfill.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thparlos <thparlos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/21 18:08:10 by thparlos          #+#    #+#             */
/*   Updated: 2019/10/12 10:05:11 by thparlos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_fulfill(char c, size_t len)
{
    size_t i;

    i = 0;
    while (i++ < len)
        ft_putchar(c);
}