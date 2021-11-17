/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hohnuki <hohnuki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 15:08:50 by hohnuki           #+#    #+#             */
/*   Updated: 2021/11/17 18:45:34 by hohnuki          ###   ########.fr       */
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
void	ft_putbit_lowercase(unsigned int c);
void	ft_putbit_uppercase(unsigned int c);

#endif
