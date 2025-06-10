/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okochulo <okochulo@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 18:10:04 by okochulo          #+#    #+#             */
/*   Updated: 2025/05/21 16:51:24 by okochulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	size_t	len;

	if (s == NULL)
		return ;
	len = ft_strlen(s);
	write (fd, s, len);
}
/*
#include <string.h>

int main() {
    char *strings[] = {"Hello, World!", "This is a test!", "", "1234567890"};
    int size = sizeof(strings) / sizeof(strings[0]);
    int i = 0;

    printf("Using ft_putstr_fd:\n");
    while (i < size) {
        ft_putstr_fd(strings[i], STDOUT_FILENO);
        ft_putstr_fd("\n", STDOUT_FILENO);
        i++;
    }
    printf("\n");
    printf("Using fputs:\n");
    i = 0;
    while (i < size) {
        fputs(strings[i], stdout);
        fputc('\n', stdout);
        i++;
    }

    return (0);
}
*/
/*
The ft_putstr_fd function writes a string to the specified file descriptor.
It takes two parameters:
1. the string to be written.
2. the file descriptor.
The function does not return any value.
If the string is NULL, the function does nothing.
The function uses the write system call to send
the string to the file descriptor.
*/