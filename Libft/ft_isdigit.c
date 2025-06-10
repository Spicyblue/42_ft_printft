/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okochulo <okochulo@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 14:04:03 by okochulo          #+#    #+#             */
/*   Updated: 2025/05/21 16:33:02 by okochulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if ('0' <= c && c <= '9')
		return (1);
	return (0);
}
/*
#include <ctype.h>  

int main()
{
    // Test cases
    char tests[] = {'3', 'a', '9', 'Z', '0', '5'};
    size_t num_tests = sizeof(tests) / sizeof(tests[0]);

    // Using a while loop to test each character
    size_t i = 0;
    while (i < num_tests)
    {
        char test = tests[i];
        printf("Test '%c': ft_isdigit: %d, isdigit: %d\n",
             test, ft_isdigit(test), isdigit(test));
        i++;
    }

    return (0);
}
*/
/*
The ft_isdigit function checks if the given character is a digit (0-9).
It returns 1 if the character is a digit and 0 otherwise.
The function also checks if the character is EOF (end of file)
and returns 0 in that case.
*/
