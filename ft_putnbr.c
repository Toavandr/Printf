/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toavandr <toavandr@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 10:16:29 by toavandr          #+#    #+#             */
/*   Updated: 2026/02/19 21:11:30 by toavandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t ft_putnbr(int n)
{
    size_t count;

    count = 0;
    if (n == -2147483648)
        return (ft_putstr("-2147483648"));
    if (n < 0)
    {
        count += ft_putchar('-');
        n = -n;
    }
    if (n >= 10)
        count += ft_putnbr(n / 10);
    count += ft_putchar((n % 10) + '0');
    return (count);
}
