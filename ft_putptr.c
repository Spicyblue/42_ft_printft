/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okochulo <okochulo@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 16:12:23 by okochulo          #+#    #+#             */
/*   Updated: 2025/06/25 14:54:17 by okochulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static	int	print_hex(unsigned long long add, char *hex)
{
	char	dig;
	int		shift;
	size_t	len;
	int		flag;

	flag = 0;
	len = 0;
	shift = (sizeof (void *) * 8) - 4;
	while (shift >= 0)
	{
		dig = hex[(add >> shift) & 0xF];
		if (dig != '0' || flag)
		{
			len += ft_putchar(dig);
			flag = 1;
		}
		shift -= 4;
	}
	if (!flag)
		len += ft_putchar('0');
	return (len);
}

int	ft_putptr(void *ptr)
{
	unsigned long long	add;
	char				*hex;
	size_t				len;

	add = (unsigned long long)ptr;
	hex = "0123456789abcdef";
	len = ft_putstr("0x");
	len += print_hex(add, hex);
	return (len);
}
