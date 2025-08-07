/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okochulo <okochulo@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 14:17:13 by okochulo          #+#    #+#             */
/*   Updated: 2025/07/21 17:16:04 by okochulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include "Libft/libft.h"

<<<<<<< HEAD
int	ft_printf(const char *format, ...);
int	ft_putchar(char c);
int	ft_putnbr(int n);
size_t  ft_printnum(int n);
int	ft_putstr(char *str);
int	ft_puthex(unsigned int n, int upper);
int	ft_putptr(void *ptr);
int	ft_putnbr_usg(unsigned int n);
int	ft_allprintf(const char *format, va_list args);
=======
int		ft_printf(const char *format, ...);
int		ft_putchar(char c);
size_t	ft_printnum(int n);
int		ft_putstr(char *str);
int		ft_puthex(unsigned int n, int upper);
int		ft_putptr(void *ptr);
int		ft_putnbr_usg(unsigned int n);
int		ft_allprintf(const char *format, va_list args);
>>>>>>> 9148c42cd520277de1419c61973574c2c6d6ced0

#endif
