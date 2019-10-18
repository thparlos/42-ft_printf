/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nodeaddright.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thparlos <thparlos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 10:17:24 by thparlos          #+#    #+#             */
/*   Updated: 2019/09/19 10:17:32 by thparlos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_nodeaddright(t_tree *new, t_tree **tree)
{
	t_tree *begin;

	begin = *tree;
	while (begin->right)
		begin = begin->right;
	begin->right = new;
	new->father = begin;
}