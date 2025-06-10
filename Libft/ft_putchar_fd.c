/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okochulo <okochulo@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 18:05:56 by okochulo          #+#    #+#             */
/*   Updated: 2025/05/21 16:40:57 by okochulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
/*
int main()
{
    // Test case: Write to standard output
    printf("Test writing to standard output:\n");
    ft_putchar_fd('A', STDOUT_FILENO);
    ft_putchar_fd('X', STDOUT_FILENO);
    ft_putchar_fd('\n', STDOUT_FILENO);
    printf("Using fputc to write to standard output:\n");
    fputc('A', stdout);
    fputc('X', stdout);
    fputc('\n', stdout);
    return (0);
}
*/
/*
The ft_putchar_fd function writes a single character
to the specified file descriptor.
It uses the write system call to send the character to the file descriptor.
The function takes two parameters:
1. the character to be written.
2. the file descriptor.
The function does not return any value.
*/