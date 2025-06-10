/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okochulo <okochulo@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 18:30:04 by okochulo          #+#    #+#             */
/*   Updated: 2025/05/12 18:51:49 by okochulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	st_ct;
	size_t	tf_ct;

	st_ct = 0;
	if (!to_find[0])
	{
		return ((char *)str);
	}
	while (str[st_ct] && st_ct < len)
	{
		tf_ct = 0;
		while ((st_ct + tf_ct) < len
			&& (str[st_ct + tf_ct]) == to_find[tf_ct] && to_find[tf_ct])
		{
			tf_ct++;
		}
		if (!to_find[tf_ct])
			return ((char *)&str[st_ct]);
		st_ct++;
	}
	return (NULL);
}
/*
#include <string.h>

int main() {
    const char *haystack = "Hello, World!";
    const char *needles[] = {"World", "Hello", "!", "ll", "o, W"};
    size_t max_lengths[] = {5, 10, 12, 15, 6};
    int num_tests = sizeof(needles) / sizeof(needles[0]);
    int i = 0;

    while (i < num_tests) {
        char *custom_result = ft_strnstr(haystack, needles[i], max_lengths[i]);
        char *standard_result = strnstr(haystack, needles[i], max_lengths[i]);

        printf("Searching '%s' in '%s' with max length %zu\n",
                needles[i], haystack, max_lengths[i]);
        printf("ft_strnstr: %s\n",
            custom_result ? custom_result : "Not found");
        printf("strnstr: %s\n",
            standard_result ? standard_result : "Not found");
        i++;
    }

    return (0);
}
*/
/*
The ft_strnstr function searches for the first occurrence of a substring
 in a string, up to a specified length. It takes three parameters:
 1. the string to be searched.
 2. the substring to search for.
 3. the maximum length to search within.
 If the substring is found, it returns a pointer to the beginning of the
 substring in the string. If not found, it returns NULL.
*/
