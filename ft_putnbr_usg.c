/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_usg.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okochulo <okochulo@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 16:54:33 by okochulo          #+#    #+#             */
/*   Updated: 2025/07/21 17:26:40 by okochulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static int	ft_ct_dig(unsigned int n)
{
	int	ct;

	ct = 0;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		n = n / 10;
		ct++;
	}
	return (ct);
}

static void	ft_convert_int_to_str(char *res, unsigned int n, int len)
{
	while (len > 0)
	{
		res[len - 1] = (n % 10) + '0';
		n = n / 10;
		len--;
	}
}

char	*ft_utoa(unsigned int n)
{
	int		len;
	char	*res;

	len = ft_ct_dig(n);
	res = (char *)malloc(sizeof(char) * (len + 1));
	if (!res)
		return (NULL);
	res[len] = '\0';
	ft_convert_int_to_str(res, n, len);
	return (res);
}

int	ft_putnbr_usg(unsigned int n)
{
	size_t	len;
	char	*str;

	len = 0;
	if (n == 0)
	{
		len = write(1, "0", 1);
		return (len);
	}
	if (!n)
		return (0);
	str = ft_utoa(n);
	if (!str)
		return (0);
	len = ft_putstr(str);
	free(str);
	return (len);
}
