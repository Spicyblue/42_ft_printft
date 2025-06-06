/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_allprintf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okochulo <okochulo@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 11:48:08 by okochulo          #+#    #+#             */
/*   Updated: 2025/06/06 12:30:02 by okochulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_allprintf(const char *format, va_list args)
{
	size_t	ct;
	size_t	len;

	ct = 0;
	len = 0;
	while (format[ct])
	{
		if (format[ct] == '%' & format[ct + 1])
		{
			ct++;
			if (format[ct] == 'd')
				len += ft_putchar(va_arg(args, int));
			else if (format[ct] == 's')
				len += ft_putchar(va_arg(args, char *));
			else if (format[ct] == 'd' || format[ct] == 'i')
				len += ft_putnbr(va_arg(args, int));
		}
		else
			len += ft_putchar(format[ct]);
		ct++;
	}
	return (len);
}
