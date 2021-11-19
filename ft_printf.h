/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hohnuki <hohnuki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 15:08:50 by hohnuki           #+#    #+#             */
/*   Updated: 2021/11/19 22:24:07 by hohnuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include <stdio.h>

int		ft_printf(const char *format, ...);
void	ft_putchar(int c);
void	ft_putnbr(int nb);
void	ft_putstr(char *str);
void	ft_putnbr_ui(unsigned int nb);
void	ft_putbit_lowercase(unsigned long long c);
void	ft_putbit_uppercase(unsigned int c);
void	ft_put_address(unsigned long long c);
int		ft_isdigit(int c);
size_t	ft_strlen(const char *str);
size_t	ft_putnbr_d(int nb, size_t i);

#endif
