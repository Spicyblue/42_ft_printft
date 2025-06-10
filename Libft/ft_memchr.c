/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okochulo <okochulo@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 14:06:54 by okochulo          #+#    #+#             */
/*   Updated: 2025/05/21 16:38:08 by okochulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *ptr, int val, size_t num)
{
	const unsigned char	*p;
	unsigned char		v;
	size_t				i;

	p = (const unsigned char *)ptr;
	v = (unsigned char)val;
	i = 0;
	while (i < num)
	{
		if (p[i] == v)
		{
			return ((void *)(p + i));
		}
		i++;
	}
	return (NULL);
}
/*
#include <string.h>

int main()
{
    // Test cases
    char *test_cases[] = {
        "Hello, World!",
        "This is a test.",
        "Another example.",
        "No match here.",
        "",
        "Match at the end?",
    };

    // Values to search for
    int values[] = {'o', 't', 'e', 'z', '!', '?'};
    size_t num_tests = sizeof(test_cases) / sizeof(test_cases[0]);

    size_t i = 0;
    while (i < num_tests)
    {
        size_t length = strlen(test_cases[i]);
        char *result_ft = ft_memchr(test_cases[i], values[i], length);
        char *result_std = memchr(test_cases[i], values[i], length);

        printf("Test case: \"%s\", Search for: '%c'\n", 
        test_cases[i], values[i]);
        printf("ft_memchr: %s\n", 
        result_ft ? result_ft : "NULL");
        printf("memchr: %s\n", result_std ? result_std : "NULL");
        printf("-----------------------------------\n");

        i++;
    }

    return (0);
}
*/
/*
The ft_memchr function scans the first num bytes of the memory area
pointed to by ptr for the first occurrence of the character val.
It returns a pointer to the matching byteor NULL if the character is not found.
The function treats the memory area as an array of
unsigned char.
*/