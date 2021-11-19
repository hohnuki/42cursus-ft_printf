/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hohnuki <hohnuki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 22:38:27 by hohnuki           #+#    #+#             */
/*   Updated: 2021/11/19 22:28:09 by hohnuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_printf(const char *format, ...)
{
	va_list args;
	size_t i;
	size_t return_value;

	i = 0;
	return_value = ft_strlen(format);
	va_start(args, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
			i++;
		if (format[i] == 'd' || format[i] == 'i')
			return_value = ft_putnbr_d(va_arg(args, int), return_value);
		else if (format[i] == 'c')
			ft_putchar(va_arg(args, int));
		//else if (format[i] == 's')
		//	i = ft_putstr(va_arg(args, char *), i);
		//else if (format[i] == 'u')
		//	ft_putnbr_ui(va_arg(args, unsigned int));
		//else if (format[i] == 'x')
		//	ft_putbit_lowercase(va_arg(args, unsigned long long));
		//else if (format[i] == 'X')
		//	ft_putbit_uppercase(va_arg(args, unsigned int));
		//else if (format[i] == 'p')
		//	ft_put_address(va_arg(args, unsigned long long));
		else
			ft_putchar(format[i]);
		i++;
	}
	va_end(args);
	return ((int)return_value);
}

int main(void)
{
	int	num = 1;
	//char	c = 'a';
	printf("ret=%d\n", printf("[%d]\n", num));
	ft_printf("ret=%d\n", ft_printf("[%d]\n", num));
	//printf("ret=%d\n", printf("[%c]\n", c));
	//ft_printf("ret=%d\n", ft_printf("[%c]\n", c));
}
