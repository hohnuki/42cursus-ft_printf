/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putbit_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohnukihiroki <ohnukihiroki@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 16:50:45 by hohnuki           #+#    #+#             */
/*   Updated: 2021/11/23 01:41:47 by ohnukihirok      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static size_t	ft_putbit_uppercase_count(unsigned long long c)
{
	size_t	i;

	i = 0;
	if (c == 0)
		return (i + 1);
	while (c != 0)
	{
		c /= 16;
		i++;
	}
	return (i);
}

static void	convert_to_alpha_upper(int nb)
{
	if (0 <= nb && nb <= 9)
		ft_putchar(nb + '0');
	else if (10 <= nb && nb <= 15)
	{
		nb = nb - 10 + 'A';
		ft_putchar(nb);
	}
}

size_t	ft_putbit_uppercase(unsigned long long c)
{
	size_t	i;

	i = ft_putbit_uppercase_count(c);
	if (c / 16 == 0)
	{
		convert_to_alpha_upper(c % 16);
	}
	else
	{
		ft_putbit_uppercase(c / 16);
		convert_to_alpha_upper(c % 16);
	}
	return (i);
}
