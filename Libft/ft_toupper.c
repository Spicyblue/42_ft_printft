/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okochulo <okochulo@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 18:09:43 by okochulo          #+#    #+#             */
/*   Updated: 2025/05/12 18:15:25 by okochulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if ('a' <= c && c <= 'z')
		return (c - 32);
	return (c);
}
/*
#include <ctype.h>

int main() {
    char test_chars[] = {'a', 'z', 'A', 'Z', '0', '9', EOF, '!', '\n'};
    int size = sizeof(test_chars) / sizeof(test_chars[0]);
    int i = 0;

    printf("Using ft_toupper:\n");
    while (i < size) {
        printf("%c -> %c\n", test_chars[i], ft_toupper(test_chars[i]));
        i++;
    }

    printf("Using toupper:\n");
    i = 0;
    while (i < size) {
        printf("%c -> %c\n", test_chars[i], toupper(test_chars[i]));
        i++;
    }

    return (0);
}
*/
/*
The ft_toupper function converts a lowercase letter to its uppercase equivalent.
If the character is already uppercase or not a letter,
it returns the character unchanged.
The function also checks if the character is EOF (end of file)
and returns 0 in that case.
*/
