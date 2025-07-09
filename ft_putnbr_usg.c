/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_usg.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okochulo <okochulo@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 16:54:33 by okochulo          #+#    #+#             */
/*   Updated: 2025/07/09 15:26:58 by okochulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_putnbr_usg(unsigned int n)
{
	size_t	len;
	char	*str;

	if (!n)
		return (0);
	str = ft_itoa(n);
	if (!str)
		return (0);
	len = ft_putstr(str);
	free(str);
	return (len);
}
