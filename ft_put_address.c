/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_address.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hohnuki <hohnuki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 18:34:16 by hohnuki           #+#    #+#             */
/*   Updated: 2021/11/17 19:21:48 by hohnuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_put_address(unsigned int c)
{
	unsigned long long	address;

	address = (unsigned long long)&c;
	ft_putstr("0x7ffe");
	ft_putbit_lowercase(address);
}

//int main(void)
//{
//	int a = 10;

//	printf("%p\n", &a);
//	ft_put_address(a);
//}
