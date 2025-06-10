/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okochulo <okochulo@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 16:39:26 by okochulo          #+#    #+#             */
/*   Updated: 2025/05/21 16:39:11 by okochulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*dest1;
	const unsigned char	*src1;
	size_t				i;

	dest1 = (unsigned char *)dest;
	src1 = (const unsigned char *)src;
	if (src1 < dest1 && dest1 < src1 + n)
	{
		i = n;
		while (i > 0)
		{
			dest1[i - 1] = src1[i - 1];
			i--;
		}
	}
	else
	{
		i = 0;
		while (i < n)
		{
			dest1[i] = src1[i];
			i++;
		}
	}
	return (dest);
}
/*
#include <string.h>

int main()
{
    char src1[] = "Overlap test";
    char dest_ft[50];
    char dest_std[50];

    // Initialize destination buffers
    strcpy(dest_ft, "Initial data");
    strcpy(dest_std, "Initial data");

    // Test simple copy
    ft_memmove(dest_ft, src1, strlen(src1) + 1);
    memmove(dest_std, src1, strlen(src1) + 1);
    printf("ft_memmove: \"%s\", memmove: \"%s\"\n", dest_ft, dest_std);

    // Test overlapping regions
    // Overlapping regions with memmove from src1 to src1 + 4
    ft_memmove(src1 + 4, src1, 7);
    memmove(dest_std, src1, 11);  // Copy adjusted src1 to std for comparison
    printf("ft_memmove with overlap: \"%s\", memmove with overlap: \"%s\"\n",
         src1, dest_std);

    return (0);
}
*/
/*
The ft_memmove function copies n bytes from the source memory area (src)
to the destination memory area (dest). It handles overlapping memory areas
correctly by first checking if the source and destination areas overlap.
If they do, it copies the bytes in reverse order to avoid overwriting
the source data. If they do not overlap, it copies the bytes in
forward order.
It returns a pointer to the destination memory area (dest).
*/
