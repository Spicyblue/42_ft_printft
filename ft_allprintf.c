/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_allprintf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okochulo <okochulo@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 11:48:08 by okochulo          #+#    #+#             */
/*   Updated: 2025/06/06 17:45:32 by okochulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static	int	case_handler(char id, va_list args)
{
	if (id == 'c')
		return (ft_putchar(va_arg(args, int)));
	else if (id == 's')
		return (ft_putstr(va_arg(args, char *)));
	else if (id == 'p')
		return (ft_putptr(va_arg(args, void *)));
	else if (id == 'd' || id == 'i')
		return (ft_putnbr(va_arg(args, int)));
	else if (id == 'u')
		return (ft_putnbr_usg(va_arg(args, unsigned int)));
	else if (id == 'x')
		return (ft_puthex(va_arg(args, unsigned int), 0));
	else if (id == 'X')
		return (ft_putnbr(va_arg(args, unsigned int)));
	else if (id == '%')
		return (ft_putchar('%'));
	return (0);
}

int	ft_allprintf(const char *format, va_list args)
{
	size_t	ct;
	size_t	len;

	ct = 0;
	len = 0;
	while (format[ct])
	{
		if (format[ct] == '%' && format[ct + 1])
		{
			ct++;
			len += case_handler(format[ct], args);
		}
		else
			len += ft_putchar(format[ct]);
		ct++;
	}
	return (len);
}
