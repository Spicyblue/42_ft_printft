/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okochulo <okochulo@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 12:49:34 by okochulo          #+#    #+#             */
/*   Updated: 2025/05/23 19:39:45 by okochulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_ct_wrd(const char *s, char delim)
{
	size_t	count;
	int		char_in_word;

	count = 0;
	char_in_word = 0;
	while (*s)
	{
		if (*s != delim && !char_in_word)
		{
			char_in_word = 1;
			count++;
		}
		else if (*s == delim)
			char_in_word = 0;
		s++;
	}
	return (count);
}

static char	*ft_strndup(const char *start, size_t len)
{
	char	*substr;
	size_t	i;

	substr = (char *)malloc(sizeof(char) * (len + 1));
	if (substr == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		substr[i] = start[i];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}

static size_t	ft_get_wrd_len(const char *s, char c)
{
	size_t	len;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	return (len);
}

static char	**ft_process_split(char const *s, char c, char **res)
{
	size_t		i;
	const char	*wrd_start;

	i = 0;
	while (*s)
	{
		if (*s != c)
		{
			wrd_start = s;
			s += ft_get_wrd_len(s, c);
			res[i] = ft_strndup(wrd_start, s - wrd_start);
			if (res[i] == NULL)
			{
				while (i > 0)
					free(res[--i]);
				free(res);
				return (NULL);
			}
			i++;
		}
		else
			s++;
	}
	res[i] = NULL;
	return (res);
}

char	**ft_split(char const *s, char c)
{
	size_t		word;
	char		**res;

	word = ft_ct_wrd(s, c);
	res = (char **)malloc(sizeof(char *) * (word + 1));
	if (res == NULL)
		return (NULL);
	return (ft_process_split(s, c, res));
}
/*
void print_split(char **split) {
    if (!split) {
        printf("NULL\n");
        return;
    }
    size_t i = 0;
    while (split[i]) {
        printf("\"%s\"\n", split[i]);
        free(split[i]); // Free each word
        i++;
    }
    free(split); // Free the array of pointers
}

int main() {
    const char *test_cases[] = {
        "Hello, World!",
        "This is a test string",
        "Libft is great",
        ",a,b,c,",
        ""
    };

    char delimiters[] = {
        ' ',
        ' ',
        ' ',
        ',',
        ','
    };

    size_t num_tests = sizeof(test_cases) / sizeof(test_cases[0]);
    size_t i = 0;

    while (i < num_tests) {
        // Using custom ft_split
        char **custom_result = ft_split(test_cases[i], delimiters[i]);

        // Printing results
        printf("Test case %zu:\n", i + 1);
        printf("String: \"%s\"\n", test_cases[i]);
        printf("Delimiter: '%c'\n", delimiters[i]);
        printf("Custom ft_split result:\n");
        print_split(custom_result);
        printf("\n");

        i++;
    }

    return 0;
}
*/
/*
The ft_split function splits a string into an array of strings
  based on a specified delimiter. It returns an array of strings
  (char **) and the last element of the array is NULL.
  The function allocates memory for the array and each substring,
  so it is the caller's responsibility to free the memory after use.
*/