/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toavandr <toavandr@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 09:27:15 by toavandr          #+#    #+#             */
/*   Updated: 2026/02/28 23:58:13 by toavandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	valid_format(char c)
{
	if (c == 'c' || c == 's' || c == 'p' || c == 'd'
		|| c == 'i' || c == 'u' || c == 'x' || c == 'X'
		|| c == '%')
		return (1);
	return (0);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	int		c;
	va_list	arg;

	if (!str)
		return (-1);
	i = 0;
	c = 0;
	va_start(arg, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			if (valid_format(str[i]))
				c += ft_format(arg, (char *)str, i);
			else
				c += ft_putchar(str[i - 1]);
		}
		else
			c += ft_putchar(str[i]);
		i++;
	}
	va_end(arg);
	return (c);
}
