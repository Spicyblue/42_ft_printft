/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okochulo <okochulo@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 14:17:13 by okochulo          #+#    #+#             */
/*   Updated: 2025/06/03 14:26:22 by okochulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
#define LIBFTPRINTF_H

#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>
#include "libft.h"

int	ft_printf(const char *format, ...);
int	ft_putchar(char c);
int	ft_putnbr(int n);
int ft_putstr(char *str);
int	ft_puthex(unsigned int n, int upper);
int	ft_putptr(void *ptr);
int	ft_putunsigned(unsigned int n);

#endif
