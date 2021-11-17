/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hohnuki <hohnuki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 22:38:27 by hohnuki           #+#    #+#             */
/*   Updated: 2021/11/17 19:21:12 by hohnuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
//malloc, free, write, va_start, va_arg, va_copy, va_end

int	ft_printf(const char *format, ...)
{
	va_list	args;
	size_t	i;

	i = 0;
	va_start(args, format);
	while (format[i] != '\0')
	{
		if (format[i] != '%')
			break ;
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
		i++;
	}
	va_end(args);
	return (0);
}
