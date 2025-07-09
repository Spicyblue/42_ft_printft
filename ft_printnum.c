/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnum.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okochulo <okochulo@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 17:21:15 by okochulo          #+#    #+#             */
/*   Updated: 2025/07/09 15:28:07 by okochulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

size_t	ft_printnum(int n)
{
	char	*str;
	size_t	len;

	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (0);
	}
	str = ft_itoa(n);
	if (!str)
		return (0);
	len = ft_putstr(str);
	free(str);
	return (len);
}
