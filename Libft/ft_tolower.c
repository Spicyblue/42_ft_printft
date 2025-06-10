/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okochulo <okochulo@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 18:16:17 by okochulo          #+#    #+#             */
/*   Updated: 2025/05/12 18:25:10 by okochulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if ('A' <= c && c <= 'Z')
		return (c + 32);
	return (c);
}
/*
#include <ctype.h>

int main() {
    char test_chars[] = {'a', 'z', 'A', 'Z', '0', '9', EOF, '!', '\n'};
    int size = sizeof(test_chars) / sizeof(test_chars[0]);
    int i = 0;

    printf("Using ft_tolower:\n");
    while (i < size) {
        printf("%c -> %c\n", test_chars[i], ft_tolower(test_chars[i]));
        i++;
    }

    printf("Using tolower:\n");
    i = 0;
    while (i < size) {
        printf("%c -> %c\n", test_chars[i], tolower(test_chars[i]));
        i++;
    }

    return (0);
}
*/
/*
The ft_tolower function converts an uppercase letter to its lowercase equivalent.
If the character is already lowercase or not a letter,
it returns the character unchanged.
The function also checks if the character is EOF (end of file)
and returns 0 in that case.
*/
