/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_ui.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hohnuki <hohnuki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 16:34:24 by hohnuki           #+#    #+#             */
/*   Updated: 2021/11/19 21:45:24 by hohnuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_ui(unsigned int nb)
{
	unsigned int	num;

	num = 0;
	if (nb >= 10)
	{
		ft_putnbr_ui(nb / 10);
		nb = nb % 10;
	}
	if (nb < 10 && nb >= 0)
		ft_putchar(nb + '0');
}
