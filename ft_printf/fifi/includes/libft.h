/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thparlos <thparlos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 10:55:48 by thparlos          #+#    #+#             */
/*   Updated: 2019/10/12 11:04:54 by thparlos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <string.h>
# include <unistd.h>
# include <fcntl.h>

# define BUFF_SIZE 4096


int ft_atoi(const char *str);
void	ft_bzero(void *s, size_t n);
void    ft_fulfill(char c, size_t len);
int ft_isdigit(int c);
char			*ft_itoa(int n);
size_t	ft_nbrlen(int nbr);
void ft_putchar(char c);
void		ft_putnbr(int n);
void ft_putstr(char const *s);
int		ft_putwnstr(wchar_t *str, int n);
int		ft_putwstr(wchar_t *str);

char	*ft_strchr(const char *s, int c);
size_t ft_strlen(const char *s);
int    ft_wcharlen(wchar_t c);
int		ft_wnstrlen(wchar_t *str, int n);
int ft_wstrlen(wchar_t *str);
char	ft_putwchar(wchar_t c);

#endif