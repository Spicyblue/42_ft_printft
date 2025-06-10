/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okochulo <okochulo@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 15:16:50 by okochulo          #+#    #+#             */
/*   Updated: 2025/05/21 16:31:29 by okochulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ('a' <= c && c <= 'z')
		return (1);
	if ('A' <= c && c <= 'Z')
		return (1);
	if ('0' <= c && c <= '9')
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
        printf("Test '%c': ft_isalnum: %d, isalnum: %d\n",
             test, ft_isalnum(test), isalnum(test));
        i++;
    }

    return (0);
}
*/
/*
The ft_isalnum function checks if the given character is 
an alphanumeric character (either a letter or a digit). 
It returns 1 if the character is alphanumeric and 0 otherwise.
The function also checks if the character is EOF (end of file
and returns 0 in that case.
*/