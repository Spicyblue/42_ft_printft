/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okochulo <okochulo@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 16:23:47 by okochulo          #+#    #+#             */
/*   Updated: 2025/05/21 16:40:29 by okochulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;

	str = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		str[i] = (unsigned char)c;
		i++;
	}
	return (s);
}
/*
#include <string.h>

int main()
{
    char buffer_ft[50];
    char buffer_std[50];

    // Test case 1: Fill with character '*'
    strcpy(buffer_ft, "Hello, World!");
    strcpy(buffer_std, "Hello, World!");
    ft_memset(buffer_ft, '*', 5);
    memset(buffer_std, '*', 5);
    printf("ft_memset: \"%s\", memset: \"%s\"\n", buffer_ft, buffer_std);

    // Test case 2: Fill entire string with 'x'
    strcpy(buffer_ft, "Sample Text");
    strcpy(buffer_std, "Sample Text");
    ft_memset(buffer_ft, 'x', strlen(buffer_ft));
    memset(buffer_std, 'x', strlen(buffer_std));
    printf("ft_memset: \"%s\", memset: \"%s\"\n", buffer_ft, buffer_std);

    // Test case 3: Fill with null character
    strcpy(buffer_ft, "Text with null");
    strcpy(buffer_std, "Text with null");
    ft_memset(buffer_ft, '\0', 4);
    memset(buffer_std, '\0', 4);
    printf("ft_memset: \"%s\", memset: \"%s\"\n", buffer_ft, buffer_std);

    return (0);
}
*/
/*
The ft_memset function fills the first n bytes of the memory area pointed
to by s with the constant byte c. It returns a pointer to the memory area s.
The function uses a loop to set each byte in the 
specified range to the given value.
*/