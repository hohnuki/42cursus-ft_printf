/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putbit_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hohnuki <hohnuki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 16:50:43 by hohnuki           #+#    #+#             */
/*   Updated: 2021/11/29 23:09:09 by hohnuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static size_t	ft_putbit_lowercase_count(unsigned long long c)
{
	size_t	i;

	i = 0;
	if (c == 0)
	{
		i = 1;
		return (i);
	}
	while (c != 0)
	{
		c /= 16;
		i++;
	}
	return (i);
}

static void	convert_to_alpha_lower(size_t nb)
{
	ft_putchar("0123456789abcdef"[nb]);
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
