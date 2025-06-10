/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okochulo <okochulo@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 16:09:03 by okochulo          #+#    #+#             */
/*   Updated: 2025/05/21 16:38:17 by okochulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*str1;
	const unsigned char	*str2;
	size_t				i;

	str1 = (const unsigned char *)s1;
	str2 = (const unsigned char *)s2;
	if (n == 0)
		return (0);
	i = 0;
	while (i < n)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}
/*
#include <string.h>

int main()
{
    // Test cases
    char *input1[] = {
        "Hello, World!",
        "This is a test.",
        "Another example.",
        "No match here.",
        "",
        "Match at the end?",
    };

    char *input2[] = {
        "Hello, World!",
        "This is A test.",
        "Another Example.",
        "No match there.",
        "",
        "Match at the end!",
    };

    size_t num_tests = sizeof(input1) / sizeof(input1[0]);

    size_t i = 0;
    while (i < num_tests)
    {
        size_t length = strlen(input1[i]);
        int result_ft = ft_memcmp(input1[i], input2[i], length);
        int result_std = memcmp(input1[i], input2[i], length);

        printf("Comparison of \"%s\" and \"%s\"\n", input1[i], input2[i]);
        printf("ft_memcmp: %d\n", result_ft);
        printf("memcmp: %d\n", result_std);
        printf("-----------------------------------\n");

        i++;
    }

    return (0);
}
*/
/*
The ft_memcmp function compares the first n bytes of the memory areas
 pointed to by s1 and s2. It returns an integer less than, equal to, or greater
 than zero if the first n bytes of s1 are found to be less than, to match, or
 be greater than the first n bytes of s2, respectively. If n is zero, the
 function returns 0.
*/
