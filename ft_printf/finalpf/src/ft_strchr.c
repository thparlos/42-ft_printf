/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thparlos <thparlos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 10:23:53 by thparlos          #+#    #+#             */
/*   Updated: 2019/09/19 10:24:03 by thparlos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *s, int c)
{
	char	*dest;

	dest = (char*)s;
	while (*dest != c)
	{
		if (*dest == '\0')
			return (NULL);
		dest++;
	}
	return (dest);
}