/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thparlos <thparlos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 10:29:10 by thparlos          #+#    #+#             */
/*   Updated: 2019/09/19 10:29:19 by thparlos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strndup(const char *s, size_t n)
{
	char	*scop;

	if ((scop = ((char*)malloc(sizeof(char) * n))))
	{
		ft_strncpy(scop, s, n);
		scop[n] = '\0';
		return (scop);
	}
	return (NULL);
}