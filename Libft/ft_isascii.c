/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okochulo <okochulo@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 15:23:55 by okochulo          #+#    #+#             */
/*   Updated: 2025/05/21 16:32:11 by okochulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (0 <= c && c <= 127)
		return (1);
	return (0);
}
/*
#include <ctype.h> 

int main()
{
    // Test cases
    int tests[] = {65, 128, -1, 0, 127, 255};
    size_t num_tests = sizeof(tests) / sizeof(tests[0]);

    // Using a while loop to test each integer
    size_t i = 0;
    while (i < num_tests)
    {
        int test = tests[i];
        printf("Test '%d': ft_isascii: %d, isascii: %d\n",
             test, ft_isascii(test), isascii(test));
        i++;
    }

    return (0);
}
*/
/*
The ft_isascii function checks if the given integer is an ASCII character.
It returns 1 if the integer is an ASCII character (0 to 127) and 0 otherwise.
The function also checks if the integer is EOF (end of file)
and returns 0 in that case.
*/
