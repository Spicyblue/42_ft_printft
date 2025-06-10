/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnum.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okochulo <okochulo@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 17:21:15 by okochulo          #+#    #+#             */
/*   Updated: 2025/06/10 17:44:49 by okochulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

size_t	ft_printnum(int n)
{
	char	*str:
	size_t	ct;

	str = ft_itoa(n);
	if (!str)
		return (0);
	ct = ft_putstr(str);
	free(str);
	return (ct);
}
