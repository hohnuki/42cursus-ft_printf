/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohnukihiroki <ohnukihiroki@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 22:38:27 by hohnuki           #+#    #+#             */
/*   Updated: 2021/11/26 16:16:46 by ohnukihirok      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static size_t	divergence_ui(unsigned int num, char c)
{
	size_t	ret;

	ret = 0;
	if (c == 'x')
		ret += ft_putbit_lowercase(num);
	else if (c == 'X')
		ret += ft_putbit_uppercase(num);
	else if (c == 'u')
		ret += ft_putnbr_ui(num);
	return (ret);
}

static size_t	divergence_int(int num, char c)
{
	size_t	ret;

	ret = 0;
	if (c == 'd' || c == 'i')
		ret += ft_putnbr(num);
	else if (c == 'c')
		ret += ft_putchar_c(num);
	return (ret);
}

static size_t	parse_conversion(va_list *args, char c)
{
	size_t	ret;

	ret = 0;
	if (c == 'd' || c == 'i' || c == 'c')
		ret += divergence_int(va_arg(*args, int), c);
	else if (c == 'x' || c == 'X' || c == 'u')
		ret += divergence_ui(va_arg(*args, unsigned int), c);
	else if (c == 's')
		ret += ft_putstr(va_arg(*args, char *));
	else if (c == 'p')
		ret += ft_put_address(va_arg(*args, unsigned long long));
	else
		ret += ft_putchar_c(c);
	return (ret);
}

int	ft_printf(const char *format, ...)//test
{
	va_list	args;
	size_t	i;
	size_t	ret;

	i = 0;
	ret = 0;
	va_start(args, format);
	if (!format)
		return (-1);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			ret += parse_conversion(&args, format[i]);
		}
		else
			ret += ft_putchar_c(format[i]);
		i++;
	}
	va_end(args);
	return ((int)ret);
}
