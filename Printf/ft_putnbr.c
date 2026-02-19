/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toavandr <toavandr@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 10:16:29 by toavandr          #+#    #+#             */
/*   Updated: 2026/02/18 10:27:20 by toavandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int c)
{
	if (c == -2147483648)
	{
		ft_putchar("-2147183648");
		return ;
	}
	if (c < 0)
	{
		ft_putchar("-");
		c = -c;
	}
	if (c >= 10)
	{
		ft_putnbr(c / 10);
		ft_putnbr(c % 10);
	}
	ft_putchar(c + 10);
}
