/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thparlos <thparlos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 10:28:53 by thparlos          #+#    #+#             */
/*   Updated: 2019/09/19 10:29:02 by thparlos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strncpy(char *dest, const char *src, size_t n)
{
	size_t i;
	size_t e;

	i = 0;
	e = 0;
	while (i < n && src[e] != '\0')
		dest[i++] = src[e++];
	while (i < n)
		dest[i++] = '\0';
	return (dest);
}