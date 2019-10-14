/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thparlos <thparlos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 10:11:18 by thparlos          #+#    #+#             */
/*   Updated: 2019/09/19 10:11:26 by thparlos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void *ft_memalloc(size_t size)
{
	void	*p;
	size_t	i;

	i = 0;
	if (size == 0)
		return (NULL);
	p = (void*)malloc(sizeof(void*) * size);
	if (p)
	{
		while (i != size)
			((char*)p)[i++] = 0;
		return (p);
	}
	return (NULL);
}