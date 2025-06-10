/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okochulo <okochulo@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 11:54:22 by okochulo          #+#    #+#             */
/*   Updated: 2025/05/21 16:30:51 by okochulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t			total_size;
	size_t			i;
	void			*ptr;
	unsigned char	*temp_ptr;

	if (count == 0 || size == 0)
		return (malloc(0));
	total_size = count * size;
	if (total_size / count != size)
		return (NULL);
	ptr = malloc(total_size);
	if (ptr == NULL)
		return (NULL);
	temp_ptr = (unsigned char *)ptr;
	i = 0;
	while (i < total_size)
	{
		temp_ptr[i] = 0;
		i++;
	}
	return (ptr);
}
/*
int main()
{
    size_t count = 5;
    size_t size = sizeof(int);

    // Use ft_calloc
    int *array1 = (int *)ft_calloc(count, size);
    // Use standard calloc for comparison
    int *array2 = (int *)calloc(count, size);

    // Checking the contents of the arrays
    if (array1 && array2)
    {
        printf("After ft_calloc: ");
        size_t i = 0;
        while (i < count)
        {
            printf("%d ", array1[i]);
            i++;
        }
        printf("\n");

        printf("After calloc: ");
        i = 0;
        while (i < count)
        {
            printf("%d ", array2[i]);
            i++;
        }
        printf("\n");
    }
    // Free the allocated memory
    free(array1);
    free(array2);

    return (0);
}
*/
/*
The ft_calloc function allocates memory for an array of count elements of 
size bytes each and initializes all bytes in the allocated memory to zero.
It returns a pointer to the allocated memory, or NULL if the allocation fails. 
The function checks for overflow conditions and handles them appropriately.
*/