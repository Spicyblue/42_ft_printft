/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okochulo <okochulo@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 16:12:23 by okochulo          #+#    #+#             */
/*   Updated: 2025/06/06 16:51:35 by okochulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_putptr(void *ptr)
{
	unsigned long long	add;
	unsigned long long	shift_add;
	size_t				len;
	char				*hex;
	size_t				ct;
	size_t				add_idx;
	char				c;
	int					flag;

	add = (unsigned long long)ptr;
	len = ft_putstr("0x");
	hex = "012345678abcdef";
	if (add == 0)
		return (len + ft_putchar('0'));
	ct = 0;
	add_idx = (sizeof (void*) * 2 - 1);
	flag = 1;
	while (ct >= 0)
	{
		shift_add = add >> (add_idx * 4);
		c = hex[shift_add & 0xF];
		if (c != '0' || !shift_add)
		{
			len += ft_putchar(c);
			flag = 0;
		}
		ct --;
	}
	return (len);
}
