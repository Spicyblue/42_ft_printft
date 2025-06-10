/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okochulo <okochulo@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 12:49:53 by okochulo          #+#    #+#             */
/*   Updated: 2025/05/21 16:53:59 by okochulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (s == NULL || f == NULL)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
/*
#include <string.h>

void example_function(unsigned int index, char *c) {
    (void)index; // To avoid unused parameter warning
    // Modify the character at each position to uppercase
    if (*c >= 'a' && *c <= 'z') {
        *c -= 32;
    }
}

int main() {
    char *test_cases[] = {
        "hello",
        "world",
        "42ViEnNa",
        "LIbFt",
        ""
    };

    size_t num_tests = sizeof(test_cases) / sizeof(test_cases[0]);
    size_t i = 0;

    while (i < num_tests) {
        char buffer[100];
        strcpy(buffer, test_cases[i]);

        // Apply ft_striteri
        ft_striteri(buffer, example_function);

        // Print results
        printf("Test case %zu:\n", i + 1);
        printf("Original string: \"%s\"\n", test_cases[i]);
        printf("Modified string: \"%s\"\n\n", buffer);

        i++;
    }

    return (0);
}
*/
/*
The ft_striteri function applies a function to each character of a string,
taking the index of the character as an argument.
The function takes two parameters:
1. a pointer to the string (s).
2. a pointer to the function (f) that takes an unsigned int and a char*.
The function iterates through the string and applies 
the function to each character.
The function does not return any value.
If the string or function pointer is NULL, the function does nothing.
*/