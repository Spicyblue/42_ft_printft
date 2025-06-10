/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okochulo <okochulo@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 11:56:02 by okochulo          #+#    #+#             */
/*   Updated: 2025/05/21 16:32:23 by okochulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ('a' <= c && c <= 'z')
		return (1);
	if ('A' <= c && c <= 'Z')
		return (1);
	return (0);
}
/*
#include <ctype.h> 

int main()
{
    // Test cases
    char tests[] = {'a', 'Z', '5', '!', ' '};
    size_t num_tests = sizeof(tests) / sizeof(tests[0]);

    // Using a while loop to test each character
    size_t i = 0;
    while (i < num_tests)
    {
        char test = tests[i];
        printf("Test '%c': ft_isalpha: %d, isalpha: %d\n",
             test, ft_isalpha(test), isalpha(test));
        i++;
    }

    return (0);
}
*/
/*
The ft_isalpha function checks if the given character is
 an alphabetic character (either uppercase or lowercase).
 It returns 1 if the character is alphabetic and 0 otherwise.
 The function also checks if the character is EOF (end of file
 and returns 0 in that case.
*/