/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okochulo <okochulo@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 18:55:39 by okochulo          #+#    #+#             */
/*   Updated: 2025/05/21 17:02:17 by okochulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			counter;
	unsigned char	c1;
	unsigned char	c2;

	counter = 0;
	while (counter < n)
	{
		c1 = (unsigned char)*s1;
		c2 = (unsigned char)*s2;
		if (c1 != c2 || c1 == '\0' || c2 == '\0')
		{
			return (c1 - c2);
		}
		s1++;
		s2++;
		counter++;
	}
	return (0);
}
/*
#include <string.h>

int main() {
    const char *tests[][2] = {
        {"Hello", "Hello"},
        {"Hello", "hello"},
        {"abc", "abcd"},
        {"abcd", "abc"},
        {"123", "123"},
        {"", ""}
    };
    size_t lengths[] = {5, 5, 3, 4, 3, 1};
    int num_tests = sizeof(tests) / sizeof(tests[0]);
    int i = 0;

    while (i < num_tests) {
        int custom_result = ft_strncmp(tests[i][0], tests[i][1], lengths[i]);
        int standard_result = strncmp(tests[i][0], tests[i][1], lengths[i]);

        printf("Comparing '%s' and '%s' with length %zu\n",
         tests[i][0], tests[i][1], lengths[i]);
        printf("ft_strncmp: %d\n", custom_result);
        printf("strncmp: %d\n", standard_result);
        i++;
    }

    return (0);
}
*/
/*
The ft_strncmp function compares two strings up to a 
specified number of characters (n).
It takes three parameters:
1. the first string (s1).
2. the second string (s2).
3. the maximum number of characters to compare (n).
The function returns:
- a negative value if s1 is less than s2,
- a positive value if s1 is greater than s2,
- 0 if the two strings are equal up to n characters.
If n is 0, the function returns 0.
The function compares the characters of the two strings
one by one until it finds a difference
or reaches the end of either string or the specified length (n).
If a difference is found, it returns the difference between the two characters.
If the end of either string is reached before a difference is found, 
it returns the difference between the null terminator
and the character at that position.
*/