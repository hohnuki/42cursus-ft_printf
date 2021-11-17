/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putbit_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hohnuki <hohnuki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 16:50:45 by hohnuki           #+#    #+#             */
/*   Updated: 2021/11/17 18:47:47 by hohnuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	convert_to_alpha_upper(int nb)
{
	if (0 <= nb && nb <= 9)
		ft_putnbr(nb);
	else if (nb == 10)
		ft_putchar('A');
	else if (nb == 11)
		ft_putchar('B');
	else if (nb == 12)
		ft_putchar('C');
	else if (nb == 13)
		ft_putchar('D');
	else if (nb == 14)
		ft_putchar('E');
	else if (nb == 15)
		ft_putchar('F');
}

void	ft_putbit_uppercase(unsigned int c)
{
	if (c / 16 == 0)
	{
		convert_to_alpha_upper(c % 16);
		return ;
	}
	else
	{
		ft_putbit_uppercase(c / 16);
		convert_to_alpha_upper(c % 16);
	}
}
