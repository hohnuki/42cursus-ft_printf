/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_ui.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohnukihiroki <ohnukihiroki@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 16:34:24 by hohnuki           #+#    #+#             */
/*   Updated: 2021/11/23 01:27:11 by ohnukihirok      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static size_t	ft_putnbr_ui_count(unsigned int nb)
{
	size_t	i;

	i = 0;
	if (nb == 0)
		return (i + 1);
	while (nb != 0)
	{
		i++;
		nb /= 10;
	}
	return (i);
}

size_t	ft_putnbr_ui(unsigned int nb)
{
	unsigned int	num;
	size_t			i;

	num = 0;
	i = ft_putnbr_ui_count(nb);
	if (nb >= 10)
	{
		ft_putnbr_ui(nb / 10);
		nb = nb % 10;
	}
	if (nb < 10 && nb >= 0)
		ft_putchar(nb + '0');
	return (i);
}
