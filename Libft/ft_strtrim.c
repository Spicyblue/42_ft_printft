/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okochulo <okochulo@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 17:01:12 by okochulo          #+#    #+#             */
/*   Updated: 2025/05/23 19:50:37 by okochulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_char_in_str(char c, const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	i;
	char	*trims;

	if (s1 == NULL || set == NULL)
		return (NULL);
	start = 0;
	end = ft_strlen(s1);
	while (s1[start] && ft_char_in_str(s1[start], set))
		start++;
	while (end > start && ft_char_in_str(s1[end - 1], set))
		end --;
	trims = (char *)malloc(sizeof(char) * (end - start + 1));
	if (trims == NULL)
		return (NULL);
	i = 0;
	while (start < end)
	{
		trims[i] = s1[start];
		i++;
		start++;
	}
	trims[i] = '\0';
	return (trims);
}
/*
#include <string.h>

int main() {
    char *original[] = {
        "  Hello, World!  ",
        "\t\tHello, \tOutlier!\n",
        "TestString",
        "   \t\n    ",
        "NoTrimming"
    };
    char *set = " \t\n";
    int num_tests = sizeof(original) / sizeof(original[0]);
    int i = 0;

    while (i < num_tests) {
        char *trimmed = ft_strtrim(original[i], set);
        printf("Original: '%s' | Trimmed: '%s'\n", original[i], trimmed);
        free(trimmed);
        i++;
    }

    return (0);
}
*/
/*
The ft_strtrim function trims the characters specified in the set
from the beginning and end of the string s1.
It takes two parameters:
1. the string to be trimmed (s1).
2. the set of characters to be trimmed (set).
The function returns a pointer to the newly created trimmed string.
If the string is NULL or the set is NULL, the function returns NULL.
The function first checks if the input strings are NULL.
Then, it calculates the starting and ending positions of the trimmed string
by iterating through the string and checking if the characters are in the set.
Finally, it allocates memory for the trimmed string 
and copies the trimmed characters from the original string to the new string.
The function returns the trimmed string.
*/
