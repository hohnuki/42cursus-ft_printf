/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohnukihiroki <ohnukihiroki@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 22:38:27 by hohnuki           #+#    #+#             */
/*   Updated: 2021/11/18 18:21:51 by ohnukihirok      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	adjust_min_field(char *ptr, size_t index)
{
	size_t	i;
	size_t	shift_num;

	i = index;
	shift_num = 0;
	while (ft_isdigit(ptr[i]) == 1)
	{
		shift_num *= 10;
		shift_num += ptr[i]  - '0';
		i++;
	}
	while (shift_num - 1 > 0)
	{
		ft_putchar(' ');
		shift_num--;
	}
	//このi-1怪しい
	return (i - 1);
}

size_t	adjust_accuracy(char *ptr, size_t index)
{
	size_t	i;
	size_t	shift_num;

	i = index + 1;
	shift_num = 0;
	while (ft_isdigit(ptr[i]) == 1)
	{
		shift_num *= 10;
		shift_num += ptr[i]  - '0';
		i++;
	}
	while (shift_num - 1 > 0)
	{
		ft_putchar('0');
		shift_num--;
	}
	//このi-1怪しい
	return (i - 1);
}


int	ft_printf(const char *format, ...)
{
	va_list	args;
	size_t	i;

	i = 0;
	va_start(args, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
			i++;
		if (format[i] == 'd' || format[i] == 'i')
			ft_putnbr(va_arg(args, int));
		else if (format[i] == 'c')
			ft_putchar(va_arg(args, int));
		else if (format[i] == 's')
			ft_putstr(va_arg(args, char *));
		else if (format[i] == 'u')
			ft_putnbr_ui(va_arg(args, unsigned int));
		else if (format[i] == 'x')
			ft_putbit_lowercase(va_arg(args, unsigned int));
		else if (format[i] == 'X')
			ft_putbit_uppercase(va_arg(args, unsigned int));
		else if (format[i] == 'p')
			ft_put_address(va_arg(args, unsigned int));
		else if (ft_isdigit(format[i]) == 1)
			i = adjust_min_field((char *)format, i);
		else if (format[i] == '.')
			i = adjust_accuracy((char *)format, i);
		else
			ft_putchar(format[i]);
		i++;
	}
	va_end(args);
	return (0);
}

int	main(void)
{
	int	num = 5;
	printf("[%30d]\n", num);
	ft_printf("[%30d]", num);
}
