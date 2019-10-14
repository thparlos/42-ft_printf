/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_operator.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thparlos <thparlos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/21 16:07:55 by thparlos          #+#    #+#             */
/*   Updated: 2019/10/12 09:22:34 by thparlos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_printf.h>

char *ft_grep_first_number(const char *format, int *i, char *min_nbr_printed)
{
    int x;
    
    ft_bzero(min_nbr_printed, 64);
    x = 0;
    if (ft_isdigit(format[i[0]]))
    {
        while (ft_isdigit(format[i[0]]))
        {
            min_nbr_printed[x] = format[i[0]];
            x++;
            i[0] = i[0] + 1;
        }
    }
    return (min_nbr_printed);
}

int		check_exstr(const char *str)
{
	if (str != NULL && str[0] != '\0')
		return (1);
	else
		return (0);
}

int     type_checker(const char c)
{
    if (c == 's' || c == 'S' || c == 'p' || c == 'd' || c == 'D' || c == 'i' || c == 'o' || c == 'O' || c == 'u' || c == 'U' 
        || c == 'x' || c == 'X' ||c == 'c' || c == 'C' || c == '%')
        {
            return(1);
        }
        return (0);
}

void    ft_fulfill(t_flags *flags, int size)
{
    if (flags->option_padding && !(flags->precision) && (!(flags->option_left_justify)))
        ft_fill_it('0', size);
    else
        ft_fill_it(' ', size);
}

void	print_plus(t_flags *flags, int *i, int c, int *size)
{
	if (flags->optplus && c >= 0)
	{
		ft_putchar('+');
		i[1] += 1;
		*size += 1;
	}
}