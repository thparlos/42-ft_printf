/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thparlos <thparlos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 10:11:35 by thparlos          #+#    #+#             */
/*   Updated: 2019/09/19 10:11:43 by thparlos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*s1;
	unsigned char	*s2;
	unsigned char	x;

	i = 0;
	s1 = (unsigned char*)dst;
	s2 = (unsigned char*)src;
	x = (unsigned char)c;
	while (i < n)
	{
		if ((*s1++ = *s2++) == x)
			return (s1);
		i++;
	}
	return (NULL);
}