/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okochulo <okochulo@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 18:19:51 by okochulo          #+#    #+#             */
/*   Updated: 2025/05/21 16:50:54 by okochulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	size_t	len;

	if (s == NULL)
		return ;
	len = ft_strlen(s);
	write(fd, s, len);
	write(fd, "\n", 1);
}
/*
#include <string.h>

int main()
{
    // Test writing to standard output using ft_putendl_fd
    printf("Using ft_putendl_fd to write to standard output:\n");
    ft_putendl_fd("Hello, World!", STDOUT_FILENO);
    ft_putendl_fd("This is a test!", STDOUT_FILENO);

    // Using standard functions for comparison
    printf("Using standard functions to write to standard output:\n");
    fputs("Hello, World!\n", stdout);
    fputs("This is a test!\n", stdout);

    return (0);
}
*/
/*
The ft_putendl_fd function writes a string to the specified file descriptor
and appends a newline character at the end.
It takes two parameters:
1. the string to be written.
2. the file descriptor.
The function does not return any value.
If the string is NULL, the function does nothing.
The function uses the write system call to send the string and newline character
to the file descriptor.
*/