/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okochulo <okochulo@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 15:50:40 by okochulo          #+#    #+#             */
/*   Updated: 2025/05/19 15:50:50 by okochulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;
	size_t	str_len;
	size_t	tot_len;

	i = 0;
	if (s == NULL)
		return (NULL);
	str_len = ft_strlen(s);
	if (start >= str_len)
		tot_len = 0;
	else if (start + len > str_len)
		tot_len = str_len - start;
	else
		tot_len = len;
	sub = (char *)malloc(sizeof(char) * (tot_len + 1));
	if (sub == NULL)
		return (NULL);
	while (i < tot_len && s[start + i] != '\0')
	{
		sub[i] = s[start + i];
		i++;
	}
	sub[i] = '\0';
	return (sub);
}
/*
int main() {
    char *string = "Hello, World!";
    unsigned int start_positions[] = {0, 2, 11, 15};
    size_t lengths[] = {5, 5, 5, 5};
    int test_cases = sizeof(start_positions) / sizeof(start_positions[0]);
    int i = 0;

    while (i < test_cases) {
        char *result = ft_substr(string, start_positions[i], lengths[i]);
        printf("ft_substr('%s', %u, %zu) = '%s'\n", 
        string, start_positions[i], lengths[i], result);
        free(result);
        i++;
    }

    return (0);
}
*/
/*
The ft_substr function creates a substring from a given string.
It takes three parameters:
1. the original string (s).
2. the starting position (start) from which to create the substring.
3. the length (len) of the substring to be created.
The function returns a pointer to the newly created substring.
If the starting position is greater than the length of the string,
the function returns an empty string.
If the starting position is within the string but the length exceeds
the remaining length of the string, the function creates a substring
of the remaining characters.
If the starting position is greater than the length of the string,
the function returns NULL.
The function allocates memory for the new substring and copies the characters
from the original string to the new substring.
The function also ensures that the new substring is null-terminated.
The caller is responsible for freeing the memory allocated for the substring.
*/
