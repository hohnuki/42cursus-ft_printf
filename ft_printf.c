/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohnukihiroki <ohnukihiroki@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 22:38:27 by hohnuki           #+#    #+#             */
/*   Updated: 2021/11/23 01:37:18 by ohnukihirok      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	args;
	size_t	i;
	size_t	ret;

	i = 0;
	ret = 0;
	va_start(args, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
			i++;
		if (format[i] == 'd' || format[i] == 'i')
			ret += ft_putnbr(va_arg(args, int));
		else if (format[i] == 'c')
		{
			ft_putchar(va_arg(args, int));
			ret++;
		}
		else if (format[i] == 's')
			ret += ft_putstr(va_arg(args, char *));
		else if (format[i] == 'u')
			ret += ft_putnbr_ui(va_arg(args, unsigned int));
		else if (format[i] == 'x')
			ret += ft_putbit_lowercase(va_arg(args, unsigned long long));
		else if (format[i] == 'X')
			ret += ft_putbit_uppercase(va_arg(args, unsigned int));
		else if (format[i] == 'p')
			ret += ft_put_address(va_arg(args, unsigned long long));
		else if (format[i] == '%')
		{
			ft_putchar('%');
			ret++;
		}
		else
		{
			ft_putchar(format[i]);
			ret++;
		}
		i++;
	}
	va_end(args);
	return ((int)ret);
}
