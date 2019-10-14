/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thparlos <thparlos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 10:08:36 by thparlos          #+#    #+#             */
/*   Updated: 2019/09/19 10:08:45 by thparlos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f) (t_list *elem))
{
	t_list *src;
	t_list *dest;
	t_list *begin;

	src = lst;
	dest = f(src);
	begin = dest;
	while (src->next != NULL)
	{
		dest->next = f(src->next);
		dest = dest->next;
		src = src->next;
	}
	return (begin);
}