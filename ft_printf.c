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
#include <stdio.h>

int main(void)
{
    int ret1, ret2;

    // Test %c
    ret1 = printf("Character: %c\n", 'A');
    ret2 = ft_printf("Character: %c\n", 'A');
    printf("Return values: printf = %d, ft_printf = %d\n\n", ret1, ret2);

    // Test %s
    ret1 = printf("String: %s\n", "Hello");
    ret2 = ft_printf("String: %s\n", "Hello");
    printf("Return values: printf = %d, ft_printf = %d\n\n", ret1, ret2);

    // Test %p
    void *ptr = &ret1;
    ret1 = printf("Pointer: %p\n", ptr);
    ret2 = ft_printf("Pointer: %p\n", ptr);
    printf("Return values: printf = %d, ft_printf = %d\n\n", ret1, ret2);

    // Test %d and %i
    ret1 = printf("Decimal: %d Integer: %i\n", 42, 42);
    ret2 = ft_printf("Decimal: %d Integer: %i\n", 42, 42);
    printf("Return values: printf = %d, ft_printf = %d\n\n", ret1, ret2);

    // Test %u
    ret1 = printf("Unsigned: %u\n", 42);
    ret2 = ft_printf("Unsigned: %u\n", 42);
    printf("Return values: printf = %d, ft_printf = %d\n\n", ret1, ret2);

    // Test %x and %X
    ret1 = printf("Hex (lowercase): %x Hex (uppercase): %X\n", 255, 255);
    ret2 = ft_printf("Hex (lowercase): %x Hex (uppercase): %X\n", 255, 255);
    printf("Return values: printf = %d, ft_printf = %d\n\n", ret1, ret2);

    // Test %%
    ret1 = printf("Percent sign: %%\n");
    ret2 = ft_printf("Percent sign: %%\n");
    printf("Return values: printf = %d, ft_printf = %d\n\n", ret1, ret2);

    return 0;
}