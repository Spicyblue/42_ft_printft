/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okochulo <okochulo@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 17:35:27 by okochulo          #+#    #+#             */
/*   Updated: 2025/05/23 13:57:51 by okochulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	dest_len;
	size_t	src_len;
	size_t	i;

	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	if (size <= dest_len)
	{
		return (size + src_len);
	}
	i = 0;
	while (src[i] && dest_len + i + 1 < size)
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest_len + src_len);
}
/*
#include <string.h>

int main()
{
    char dest1[50];
    char dest2[50];

    char *test_source[] = {
        "World",
        "Hello",
        "!",
        " Testing",
        ""
    };

    char *initial_dest[] = {
        "Hello, ",
        "",
        "Welcome to ",
        "This is a",
        "Already full bufferxxxxxxxxxxxxxxxxxxxxxxxx"
    };

    unsigned int sizes[] = {
        50,
        10,
        20,
        15,
        48
    };

    size_t num_tests = sizeof(test_source) / sizeof(test_source[0]);
    size_t i = 0;

    while (i < num_tests) {
        strcpy(dest1, initial_dest[i]);
        strcpy(dest2, initial_dest[i]);

        // Using your custom function
        unsigned int custom_len = ft_strlcat(dest1, test_source[i], sizes[i]);
        
        // Using the standard library function (if available)
        unsigned int standard_len = strlcat(dest2, test_source[i], sizes[i]);

        // Printing results
        printf("Test case %zu:\n", i + 1);
        printf("Initial dest: \"%s\"\n", initial_dest[i]);
        printf("Source: \"%s\"\n", test_source[i]);
        printf("Size: %u\n", sizes[i]);
        printf("Custom ft_strlcat Result: \"%s\" (length: %u)\n",
         dest1, custom_len);
        printf("Standard strlcat Result: \"%s\" (length: %u)\n\n",
         dest2, standard_len);

        i++;
    }

    return (0);
}
*/
/*
The ft_strlcat function appends the source string (src) 
to the destination string (dest), ensuring that the total length of the
resulting string does not exceed the specified size (size).
It takes three parameters:
1. dest: the destination string to which src will be appended.
2. src: the source string to be appended.
3. size: the maximum size of the destination buffer.
The function returns the total length of the string it tried to create,
which is the length of dest plus the length of src.
If the size is less than or equal to the length of dest,
the function returns size + the length of src.
If the size is greater than the length of dest,
the function appends src to dest and null-terminates the result.
If the size is 0, the function does not perform any operations
and returns the length of src.
*/
