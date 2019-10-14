/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thparlos <thparlos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 10:18:31 by thparlos          #+#    #+#             */
/*   Updated: 2019/10/12 11:31:13 by thparlos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_printf.h>

int ft_printf(const char *format, ...)
{
	va_list list;
	va_list cp;
	int		ret;

	ret = 0;
	
	if (check_exstr(format))
	{
		va_start(list, format);
		va_copy(cp, list);
		if (ft_strchr(format, '%'))
			ret = found_flags(format, list);
		else
		{
			ft_putstr(format);
			ret = ft_strlen(format);
		}
		va_end(list);
		va_end(cp);
	}
	return (ret);
}