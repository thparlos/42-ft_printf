/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thparlos <thparlos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 10:30:19 by thparlos          #+#    #+#             */
/*   Updated: 2019/09/19 10:30:31 by thparlos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define NULL 0

char *ft_strrchr(const char *s, int c)
{
	int		i;
	char	*pos;

	i = 0;
	pos = NULL;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			pos = ((char*)&s[i]);
		i++;
	}
	if (c == 0)
		return ((char*)&s[i]);
	return (pos);
}