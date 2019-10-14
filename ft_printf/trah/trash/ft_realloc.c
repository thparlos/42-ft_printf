/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thparlos <thparlos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 10:23:20 by thparlos          #+#    #+#             */
/*   Updated: 2019/09/19 10:23:28 by thparlos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

static void		*ft_memcpyy(void *dest, const void *src, size_t n)
{
	size_t i;

	i = 0;
	if ((dest == 0) || (src == 0) || (n == 0))
		return (0);
	while (i < n)
	{
		((unsigned char*)dest)[i] = ((unsigned char*)src)[i];
		i++;
	}
	return (dest);
}

void			*ft_realloc(void *ptr, size_t size)
{
	void *result;

	if (size == 0)
	{
		free(ptr);
		ptr = NULL;
		return (ptr);
	}
	if (ptr == NULL)
	{
		result = malloc(size);
		return (result);
	}
	result = malloc(size);
	ft_memcpyy(result, ptr, size);
	free(ptr);
	return (result);
}