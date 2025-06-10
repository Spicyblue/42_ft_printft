/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okochulo <okochulo@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 12:58:22 by okochulo          #+#    #+#             */
/*   Updated: 2025/05/21 16:43:42 by okochulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n = -n;
	}
	if (n >= 10)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putchar_fd(n % 10 + '0', fd);
	}
	else
	{
		ft_putchar_fd(n + '0', fd);
	}
}
/*
int main() {
    int numbers[] = {12345, -98765, 0, -2147483648, 2147483647};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    int i = 0;

    printf("Using ft_putnbr_fd:\n");
    while (i < size) {
        ft_putnbr_fd(numbers[i], STDOUT_FILENO);
        ft_putchar_fd('\n', STDOUT_FILENO);
        i++;
    }

    printf("Using dprintf:\n");
    i = 0;
    while (i < size) {
        dprintf(STDOUT_FILENO, "%d\n", numbers[i]);
        i++;
    }

    return (0);
}
*/
/*
The ft_putnbr_fd function writes an integer to the specified file descriptor.
It handles negative numbers as well as INT_MIN (-2147483648) separately.
The function takes two parameters:
1. the integer to be written.
2. the file descriptor.
The function does not return any value.
It uses recursion to handle the digits of the integer.
The function first checks if the number is negative
and writes a '-' sign if it is. Then, it recursively calls itself
to handle the digits of the number.
Finally, it writes the last digit to the file descriptor.
*/