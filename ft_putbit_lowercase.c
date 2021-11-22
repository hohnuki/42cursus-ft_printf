/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putbit_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohnukihiroki <ohnukihiroki@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 16:50:43 by hohnuki           #+#    #+#             */
/*   Updated: 2021/11/23 01:45:19 by ohnukihirok      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static size_t	ft_putbit_lowercase_count(unsigned long long c)
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

static void	convert_to_alpha_lower(int nb)
{
	if (0 <= nb && nb <= 9)
		ft_putchar(nb + '0');
	else if (10 <= nb && nb <= 15)
	{
		nb = nb - 10 + 'a';
		ft_putchar(nb);
	}
}

size_t	ft_putbit_lowercase(unsigned long long c)
{
	size_t	i;

	i = ft_putbit_lowercase_count(c);
	if (c / 16 == 0)
	{
		convert_to_alpha_lower(c % 16);
	}
	else
	{
		ft_putbit_lowercase(c / 16);
		convert_to_alpha_lower(c % 16);
	}
	return (i);
}
