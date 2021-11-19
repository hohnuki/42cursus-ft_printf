/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putbit_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hohnuki <hohnuki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 16:50:43 by hohnuki           #+#    #+#             */
/*   Updated: 2021/11/19 21:48:22 by hohnuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	convert_to_alpha_lower(int nb)
{
	if (0 <= nb && nb <= 9)
		ft_putnbr(nb);
	else if (10 <= nb && nb <= 15)
	{
		nb = nb - 10 + 'a';
		ft_putnbr(nb);
	}
}

void	ft_putbit_lowercase(unsigned long long c)
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
