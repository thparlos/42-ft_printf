/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wcharlen.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thparlos <thparlos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/22 17:34:41 by thparlos          #+#    #+#             */
/*   Updated: 2019/10/12 10:11:52 by thparlos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int    ft_wcharlen(wchar_t c)
{
	unsigned int i;

	i = (unsigned int)c;
	if (c >= 0 && c <= 255)
		return (1);
	else if (i > 255 && i < 0x10FFFF) /*1114111*/
	{
		if (i < 0x07FF) /*2047*/
			return (2);
		else if (i < 0xFFFF) /*65535*/
			return (3);
		else
			return (4);
	}
	else
		return (1);
}