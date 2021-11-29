/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hohnuki <hohnuki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 15:08:50 by hohnuki           #+#    #+#             */
/*   Updated: 2021/11/29 15:02:28 by hohnuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include <limits.h>

int		ft_printf(const char *format, ...);
void	ft_putchar(int c);
size_t	ft_putnbr(int nb);
size_t	ft_putstr(char *str);
size_t	ft_putnbr_ui(unsigned int nb);
size_t	ft_putbit_lowercase(unsigned long long c);
size_t	ft_putbit_uppercase(unsigned long long c);
size_t	ft_put_address(unsigned long long c);
size_t	ft_putchar_c(int c);

#endif
