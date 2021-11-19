/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_d.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hohnuki <hohnuki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 22:19:19 by hohnuki           #+#    #+#             */
/*   Updated: 2021/11/19 22:29:01 by hohnuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_putnbr_d(int nb, size_t i)
{
	int	num;

	num = 0;
	i++;
	if (nb < 0)
	{
		ft_putchar('-');
		if (nb == -2147483648)
		{
			nb /= 10;
			num = nb;
		}
		nb *= -1;
	}
	if (nb >= 10)
	{
		ft_putnbr_d(nb / 10, i);
		nb %= 10;
	}
	if (nb < 10 && nb >= 0)
		ft_putchar(nb + '0');
	if (num == -214748364)
		ft_putchar(8 + '0');
	return (i);
}
