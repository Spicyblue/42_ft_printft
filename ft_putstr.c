/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okochulo <okochulo@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 11:34:33 by okochulo          #+#    #+#             */
/*   Updated: 2025/07/09 15:27:21 by okochulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_putstr(char *str)
{
	size_t	len;
	size_t	ct;

	if (!str)
	{
		ct = write(1, "(null)", 6);
		return (ct);
	}
	ct = 0;
	while (str[ct])
	{
		len += ft_putchar(str[ct]);
		ct++;
	}
	return (ct);
}
