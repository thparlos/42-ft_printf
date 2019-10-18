/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_linttooct.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thparlos <thparlos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 10:06:24 by thparlos          #+#    #+#             */
/*   Updated: 2019/09/19 10:06:32 by thparlos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_printf.h>

void	ft_linttoct(unsigned long long int nb, char *str)
{
	const int	mask2 = (7 << 0);
	int			i;

	i = 1;
	if (nb > 0)
	{
		while ((nb >> (3 * i)) > 0)
			i++;
		while (nb > 0)
		{
			str[i - 1] = '0' + (nb & mask2);
			i--;
			nb >>= 3;
		}
	}
	else
		str[0] = '0';
}