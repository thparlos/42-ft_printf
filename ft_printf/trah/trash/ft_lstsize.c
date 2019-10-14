/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thparlos <thparlos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 10:11:02 by thparlos          #+#    #+#             */
/*   Updated: 2019/09/19 10:11:09 by thparlos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_lstsize(t_list *list)
{
	t_list *begin;
	size_t i;

	begin = list;
	if (!list)
		return (0);
	i = 0;
	while (begin->next)
	{
		begin = begin->next;
		i++;
	}
	return (i);
}