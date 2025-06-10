/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okochulo <okochulo@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 16:32:24 by okochulo          #+#    #+#             */
/*   Updated: 2025/05/21 16:38:58 by okochulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*dest1;
	const unsigned char	*src1;
	size_t				i;

	dest1 = (unsigned char *)dest;
	src1 = (const unsigned char *)src;
	i = 0;
	while (i < n)
	{
		dest1[i] = src1[i];
		i++;
	}
	return (dest);
}
/*
#include <string.h>

int main()
{
    // Test cases
    char src1[] = "Hello, World!";
    char src2[] = "Another example.";
    char src3[] = "Different lengths";
    
    char dest_ft[50];
    char dest_std[50];

    // Copy using ft_memcpy
    ft_memcpy(dest_ft, src1, strlen(src1) + 1);
    memcpy(dest_std, src1, strlen(src1) + 1);
    printf("ft_memcpy: \"%s\", memcpy: \"%s\"\n", dest_ft, dest_std);

    // Copy using ft_memcpy
    ft_memcpy(dest_ft, src2, strlen(src2) + 1);
    memcpy(dest_std, src2, strlen(src2) + 1);
    printf("ft_memcpy: \"%s\", memcpy: \"%s\"\n", dest_ft, dest_std);

    // Copy using ft_memcpy with partial length
    ft_memcpy(dest_ft, src3, 9);  // Copy only part of the string
    dest_ft[9] = '\0';            // Null-terminate
    memcpy(dest_std, src3, 9);
    dest_std[9] = '\0';           // Null-terminate
    printf("ft_memcpy: \"%s\", memcpy: \"%s\"\n", dest_ft, dest_std);

    return (0);
}
*/
/*
The ft_memcpy function copies n bytes from the source memory area (src)
to the destination memory area (dest).
It returns a pointer to the destination memory area (dest).
It does not check for overlapping memory areas, so it is the
responsibility of the caller to ensure that the source and destination
memory areas do not overlap.
*/