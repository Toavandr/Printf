/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrbase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toavandr <toavandr@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 11:19:09 by toavandr          #+#    #+#             */
/*   Updated: 2026/02/19 20:32:41 by toavandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	if (!str)
		return (0);
	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_putnbrbase(unsigned long long nbr, char *base)
{
	size_t	count;
	size_t	len;

	if (!base || !nbr)
		return (0);
	len = ft_strlen(base);
	count = 0;
	while (nbr >= len)
		count += ft_putnbrbase((nbr / len), base);
	ft_putchar(base[nbr % len]);
	return (len);
}
