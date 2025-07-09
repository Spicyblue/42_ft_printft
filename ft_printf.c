/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okochulo <okochulo@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 16:05:06 by okochulo          #+#    #+#             */
/*   Updated: 2025/07/09 15:10:09 by okochulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_printf(const char *format, ...)
{
	va_list	args;
	size_t	len;

	if (!format)
		return (-1);
	va_start(args, format);
	len = ft_allprintf(format, args);
	va_end(args);
	return (len);
}
