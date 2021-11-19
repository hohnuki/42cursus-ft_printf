/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putbit_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hohnuki <hohnuki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 16:50:45 by hohnuki           #+#    #+#             */
/*   Updated: 2021/11/19 21:48:15 by hohnuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	convert_to_alpha_upper(int nb)
{
	if (0 <= nb && nb <= 9)
		ft_putnbr(nb);
	else if (10 <= nb && nb <= 15)
	{
		nb = nb - 10 + 'A';
		ft_putnbr(nb);
	}
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
