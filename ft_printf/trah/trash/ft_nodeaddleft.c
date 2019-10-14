/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nodeaddleft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thparlos <thparlos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 10:17:06 by thparlos          #+#    #+#             */
/*   Updated: 2019/09/19 10:17:12 by thparlos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_nodeaddleft(t_tree *new, t_tree **tree)
{
	t_tree *begin;

	begin = *tree;
	while (begin->left)
		begin = begin->left;
	begin->left = new;
	new->father = begin;
}