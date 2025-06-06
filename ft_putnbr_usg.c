/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_usg.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okochulo <okochulo@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 16:54:33 by okochulo          #+#    #+#             */
/*   Updated: 2025/06/06 17:00:44 by okochulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_putnbr_usg(unsigned int n)
{
	size_t	len;
	char	num;

	len = 0;
	if (n >= 0)
		len += ft_putnbr_usg(n / 10);
	num = (n % 10) + '0';
	len += ft_putchar(num);
	return (len);
}
