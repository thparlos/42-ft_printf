/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putwnstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thparlos <thparlos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 10:22:42 by thparlos          #+#    #+#             */
/*   Updated: 2019/09/19 10:22:52 by thparlos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_printf.h>

int		ft_putwnstr(wchar_t *str, int n)
{
	int i;

	i = 0;
	while (*str != '\0' && (i + ft_wcharlen(*str)) <= n)
	{
		i += ft_putwchar(*str);
		str++;
	}
	return (i);
}