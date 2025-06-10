/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okochulo <okochulo@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 16:56:27 by okochulo          #+#    #+#             */
/*   Updated: 2025/05/22 12:20:03 by okochulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*src;
	size_t			i;

	i = 0;
	src = (unsigned char *)s;
	while (i < n)
	{
		src[i] = 0;
		i++;
	}
}
/*
#include <strings.h>  // For the standard bzero function if available
#include <string.h>   // For memset for comparison

int main()
{
    char buffer1[] = "Hello, World!";
    char buffer2[] = "Hello, World!";
    size_t n = 5;

    // Use ft_bzero
    ft_bzero(buffer1, n);
    // Use standard bzero for comparison
    bzero(buffer2, n);

    printf("After ft_bzero: ");
    size_t i = 0;
    while (i < sizeof(buffer1))
    {
        printf("%d ", buffer1[i]);
        i++;
    }
    printf("\n");

    printf("After bzero: ");
    i = 0;
    while (i < sizeof(buffer2))
    {
        printf("%d ", buffer2[i]);
        i++;
    }
    printf("\n");

    return (0);
}
*/
/*
The ft_bzero function sets the first n bytes of the memory area pointed to by
s to zero. It is typically used to initialize a block of memory to zero,
which can be useful for clearing buffers or structures before use.
*/