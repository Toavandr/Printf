/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toavandr <toavandr@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 10:43:10 by toavandr          #+#    #+#             */
/*   Updated: 2026/02/28 22:04:40 by toavandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_format(va_list arg, char *str, int i)
{
	int	count;

	count = 0;
	if (str[i] == 'c')
		count += ft_putchar(va_arg(arg, int));
	else if (str[i] == 's')
		count += ft_putstr(va_arg(arg, char *));
	else if (str[i] == 'p')
	{
		count += ft_putstr("0x");
		count += ft_putnbrbase(va_arg(arg, unsigned long long),
				"0123456789abcdef");
	}
	else if (str[i] == 'd' || str[i] == 'i')
		count += ft_putnbr(va_arg(arg, int));
	else if (str[i] == 'u')
		count += ft_putnbrbase(va_arg(arg, unsigned int), "0123456789");
	else if (str[i] == 'x')
		count += ft_putnbrbase(va_arg(arg, unsigned int), "0123456789abcdef");
	else if (str[i] == 'X')
		count += ft_putnbrbase(va_arg(arg, unsigned int), "0123456789ABCDEF");
	else if (str[i] == '%')
		count += ft_putchar('%');
	return (count);
}
