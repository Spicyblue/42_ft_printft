/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okochulo <okochulo@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 17:32:35 by okochulo          #+#    #+#             */
/*   Updated: 2025/05/23 13:58:11 by okochulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size > 0)
	{
		while (src[i] && i < size - 1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (ft_strlen(src));
}
/* 
#include <string.h>

int main()
{
    // Test cases
    char *test_cases[] = {
        "Hello, World!",
        "",
        "A longer string that exceeds buffer size",
        "Short",
    };

    unsigned int sizes[] = {20, 10, 5, 0}; // Variations on size
    unsigned int length = sizeof(test_cases) / sizeof(test_cases[0]);

    unsigned int i = 0;
    while (i < 4) // Loop through test_cases
    {
        unsigned int j = 0;
        while (j < length) // Loop through sizes
        {
            char dest1[100]; // Adjust size as needed
            char dest2[100];
    
            // Use ft_strlcpy
            unsigned int ret_ft = ft_strlcpy(dest1, test_cases[i], sizes[j]);
    
            // Use standard strlcpy if available
            unsigned int ret_std = strlcpy(dest2, test_cases[i], sizes[j]);

            // Compare results
            printf("Source: \"%s\"\n", test_cases[i]);
            printf("Size: %u\n", sizes[j]);
            printf("ft_strlcpy: dest=\"%s\", return=%u\n", dest1, ret_ft);
            printf("strlcpy: dest=\"%s\", return=%u\n", dest2, ret_std);
            printf("-----------------------------------\n");

            j++;
        }
        i++;
    }

    return 0;
}
 */
/*
The ft_strlcpy function copies a string from src to dest, ensuring that
the destination buffer is null-terminated and does not exceed the specified size.
It returns the length of the source string. If the size is 0, it does not copy
anything and returns the length of the source string.
*/
