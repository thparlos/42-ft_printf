/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wcharlen.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thparlos <thparlos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 10:33:05 by thparlos          #+#    #+#             */
/*   Updated: 2019/09/22 17:44:08 by thparlos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_printf.h>

char	ft_wcharlen(wchar_t c)
{
	unsigned int e;

	e = (unsigned int)c;
	if (c >= 0 && c <= 255)
		return (1);
	else if (e > 255 && e < 0x10FFFF) /*1114111*/
	{
		if (e < 0x07FF) /*2047*/
			return (2);
		else if (e < 0xFFFF) /*65535*/
			return (3);
		else
			return (4);
	}
	else
		return (1);
}