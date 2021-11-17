/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putbit_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hohnuki <hohnuki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 16:50:43 by hohnuki           #+#    #+#             */
/*   Updated: 2021/11/17 19:20:22 by hohnuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	convert_to_alpha_lower(int nb)
{
	if (0 <= nb && nb <= 9)
		ft_putnbr(nb);
	else if (nb == 10)
		ft_putchar('a');
	else if (nb == 11)
		ft_putchar('b');
	else if (nb == 12)
		ft_putchar('c');
	else if (nb == 13)
		ft_putchar('d');
	else if (nb == 14)
		ft_putchar('e');
	else if (nb == 15)
		ft_putchar('f');
}

void	ft_putbit_lowercase(unsigned int c)
{
	if (c / 16 == 0)
	{
		convert_to_alpha_lower(c % 16);
		return ;
	}
	else
	{
		ft_putbit_lowercase(c / 16);
		convert_to_alpha_lower(c % 16);
	}
}
