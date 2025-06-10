/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okochulo <okochulo@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 16:00:47 by okochulo          #+#    #+#             */
/*   Updated: 2025/05/23 19:14:44 by okochulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	ct;

	ct = 0;
	while (str[ct])
	{
		ct++;
	}
	return (ct);
}
/*
#include <string.h>

int main()
{
    const char *test_cases[] = {
        "Hello, World!",      // Regular string
        "",                   // Empty string
        "42Vienna",             // Short string
        "This is a test string to check the length.", // Longer string
        "1234567890"          // Numerical string
    };

    size_t num_tests = sizeof(test_cases) / sizeof(test_cases[0]);
    size_t i = 0;

    while (i < num_tests) {
        const char *test_str = test_cases[i];
        
        // Using your custom function
        size_t custom_len = ft_strlen(test_str);
        
        // Using the standard library function
        size_t standard_len = strlen(test_str);

        // Printing results
        printf("Test case %zu:\n", i + 1);
        printf("String: \"%s\"\n", test_str);
        printf("Custom ft_strlen: %zu\n", custom_len);
        printf("Standard strlen: %zu\n", standard_len);

        // Validation
        if (custom_len == standard_len) {
            printf("The lengths match!\n\n");
        } else {
            printf("The lengths do not match.\n\n");
        }
        
        i++;
    }

    return (0);
}
*/
/*
The ft_strlen function calculates the length of a string.
It takes a single parameter, a pointer to the string (str),
and returns the length of the string as a size_t value.
The function iterates through the string until 
it reaches the null terminator ('\0'),
counting the number of characters.
It does not count the null terminator itself.
*/
