/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okochulo <okochulo@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 13:03:18 by okochulo          #+#    #+#             */
/*   Updated: 2025/05/21 17:01:44 by okochulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*res;

	if (s == NULL || f == NULL)
		return (NULL);
	res = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (res == NULL)
		return (NULL);
	i = 0;
	while (s[i])
	{
		res[i] = f(i, s[i]);
		i++;
	}
	res[i] = '\0';
	return (res);
}

/*
#include <string.h>

char example_function(unsigned int index, char c) 
{
    (void)index; // To avoid unused parameter warning
    return (c + 1); // Example: Increment each character by 1
}

int main() {
    char *original = "Hello, World!";
    char *mapped_str = ft_strmapi(original, example_function);

    if (mapped_str) {
        printf("Original: %s\n", original);
        printf("Mapped: %s\n", mapped_str);
        free(mapped_str);
    } else {
        printf("Error in ft_strmapi\n");
    }

    return (0);
}
*/
/*
The ft_strmapi function applies a function to each character of a string,
  passing the index and the character to the function.
  It returns a new string with the results of applying the function.
  The function takes two parameters:
  1. the string to be modified.
  2. the function to apply to each character.
  The function allocates memory for the new string and returns it.
*/