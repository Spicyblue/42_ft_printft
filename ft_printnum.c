/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnum.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okochulo <okochulo@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 17:21:15 by okochulo          #+#    #+#             */
/*   Updated: 2025/07/21 17:19:24 by okochulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

size_t	ft_printnum(int n)
{
	char	*str;
<<<<<<< HEAD
	size_t	ct;
=======
	size_t	len;
>>>>>>> 9148c42cd520277de1419c61973574c2c6d6ced0

	if (n == -2147483648)
	{
		len = write(1, "-2147483648", 11);
		return (len);
	}
	str = ft_itoa(n);
	if (!str)
		return (0);
	len = ft_putstr(str);
	free(str);
	return (len);
}
