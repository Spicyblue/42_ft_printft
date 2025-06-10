/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okochulo <okochulo@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 15:51:00 by okochulo          #+#    #+#             */
/*   Updated: 2025/05/23 19:40:51 by okochulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_cpystr(char *dest, const char *src, size_t dest_ct)
{
	size_t	i;

	i = 0;
	while (src[i])
	{
		dest[dest_ct + i] = src[i];
		i++;
	}
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_str;
	size_t	len1;
	size_t	len2;
	size_t	tot_len;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	tot_len = len1 + len2;
	new_str = (char *)malloc(sizeof(char) * (tot_len + 1));
	if (new_str == NULL)
		return (NULL);
	ft_cpystr(new_str, s1, 0);
	ft_cpystr(new_str, s2, len1);
	new_str[tot_len] = '\0';
	return (new_str);
}

/*
#include <string.h>

int main()
{
    const char *test_s1[] = {
        "Hello",
        "",
        "OpenAI",
        "12345",
        "Start "
    };

    const char *test_s2[] = {
        " World",
        "Empty",
        "",
        "67890",
        "End!"
    };

    size_t num_tests = sizeof(test_s1) / sizeof(test_s1[0]);
    size_t i = 0;

    while (i < num_tests) {
        // Using custom ft_strjoin
        char *custom_joined = ft_strjoin(test_s1[i], test_s2[i]);

        // Generating expected result using strcat
        char expected[100];
        strcpy(expected, test_s1[i]);
        strcat(expected, test_s2[i]);

        // Printing results
        printf("Test case %zu:\n", i + 1);
        printf("s1: \"%s\", s2: \"%s\"\n", test_s1[i], test_s2[i]);
        printf("Custom ft_strjoin: \"%s\"\n", custom_joined);
        printf("Expected strcat: \"%s\"\n", expected);

        // Validation
        if (custom_joined && strcmp(custom_joined, expected) == 0) {
            printf("The joined strings match!\n\n");
        } else {
            printf("The joined strings do not match.\n\n");
        }

        // Free allocated memory
        free(custom_joined);

        i++;
    }

    return (0);
}
*/
/*
The ft_strjoin function concatenates two strings (s1 and s2) into a new string.
It takes two parameters:
1. s1: the first string to concatenate.
2. s2: the second string to concatenate.
It allocates memory for the new string and returns a pointer to it.
If either s1 or s2 is NULL, the function returns NULL.
*/