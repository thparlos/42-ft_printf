/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thparlos <thparlos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 10:31:26 by thparlos          #+#    #+#             */
/*   Updated: 2019/09/19 10:31:34 by thparlos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		*ft_sttrcpy(char *dest, const char *src, size_t i, size_t n)
{
	unsigned int c;

	c = 0;
	while (c < n)
	{
		dest[c] = src[i];
		i++;
		c++;
	}
	dest[n] = '\0';
	return (dest);
}

char			*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char *scop;

	if (s == NULL)
		return (NULL);
	if ((scop = ((char*)malloc(sizeof(char) * len + 1))))
	{
		scop = ft_sttrcpy(scop, s, start, len);
		return (scop);
	}
	return (scop);
}