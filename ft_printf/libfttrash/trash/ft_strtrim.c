/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thparlos <thparlos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 10:31:44 by thparlos          #+#    #+#             */
/*   Updated: 2019/09/19 10:38:31 by thparlos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strtrim(char const *s)
{
	char	*result;
	int		b;
	int		e;
	int		mode;

	if (s == NULL)
		return (NULL);
	e = ft_strlen(s);
	mode = -1;
	b = 0;
	if ((result = (char*)malloc((sizeof(*result)) * e + 1)))
	{
		while ((s[b] == ' ' || s[b] == '\t' || s[b] == '\n') && s[b] != '\0')
			b++;
		while (s[e] == ' ' || s[e] == '\t' || s[e] == '\n' || s[e] == '\0')
			e--;
		while (b <= e)
		{
			result[++mode] = s[b];
			b++;
		}
		result[++mode] = '\0';
		return (result);
	}
	return (NULL);
}