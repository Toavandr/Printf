/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toavandr <toavandr@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 09:19:03 by toavandr          #+#    #+#             */
/*   Updated: 2026/02/19 20:58:34 by toavandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

int		ft_format(va_list arg, char *str, int i);
int		ft_printf(const char *str, ...);
int		ft_putchar(int c);
size_t	ft_putnbr(int c);
int		ft_putnbrbase(unsigned long long nbr, char *base);
int		ft_putstr(const char *str);

#endif
