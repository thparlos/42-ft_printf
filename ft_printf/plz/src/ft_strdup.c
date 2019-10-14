/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thparlos <thparlos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 10:25:29 by thparlos          #+#    #+#             */
/*   Updated: 2019/09/19 10:25:37 by thparlos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strdup(const char *s)
{
	int		i;
	char	*scop;

	i = ((ft_strlen(s)) + 1);
	if ((scop = ((char*)malloc(sizeof(char) * i))))
	{
		ft_strcpy(scop, s);
		return (scop);
	}
	return (NULL);
}