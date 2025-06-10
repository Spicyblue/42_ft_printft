/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okochulo <okochulo@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 16:02:54 by okochulo          #+#    #+#             */
/*   Updated: 2025/05/21 16:35:15 by okochulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (32 <= c && c <= 126)
		return (1);
	return (0);
}
/*
#include <ctype.h>  // For the standard isprint function

int main()
{
    // Test cases
    char tests[] = {'a', 'Z', '5', ' ', '\n', '\t', '~'};
    // '\n' and '\t' are not printable characters
    size_t num_tests = sizeof(tests) / sizeof(tests[0]);

    // Using a while loop to test each character
    size_t i = 0;
    while (i < num_tests)
    {
        char test = tests[i];
        printf("Test '%c': ft_isprint: %d, isprint: %d\n",
             test, ft_isprint(test), isprint(test));
        i++;
    }

    return (0);
}
*/
/*
The ft_isprint function checks if the given character is a printable character
 (from space (32) to tilde (126)). It returns 1 if the character is printable
 and 0 otherwise. The function also checks if the character is EOF (end of file)
 and returns 0 in that case.
*/
