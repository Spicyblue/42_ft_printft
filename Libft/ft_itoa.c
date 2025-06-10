/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okochulo <okochulo@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 12:49:09 by okochulo          #+#    #+#             */
/*   Updated: 2025/05/23 19:37:49 by okochulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_ct_dig(int n)
{
	int	ct;

	ct = 0;
	if (n <= 0)
		ct = 1;
	while (n != 0)
	{
		n = n / 10;
		ct++;
	}
	return (ct);
}

static char	*ft_min_int(void)
{
	char	*res;

	res = (char *)malloc(sizeof(char) * 12);
	if (res != NULL)
		ft_strlcpy(res, "-2147483648", 12);
	return (res);
}

static void	ft_convert_int_to_str(char *res, unsigned int n, int len)
{
	while (len > 0)
	{
		res[len - 1] = (n % 10) + '0';
		n = n / 10;
		len--;
	}
}

char	*ft_itoa(int n)
{
	int		len;
	int		is_neg;
	char	*res;

	if (n == -2147483648)
		return (ft_min_int());
	is_neg = 0;
	if (n < 0)
	{
		is_neg = 1;
		n = -n;
	}
	len = ft_ct_dig(n);
	res = (char *)malloc(sizeof(char) * (len + is_neg + 1));
	if (res == NULL)
		return (NULL);
	res[len + is_neg] = '\0';
	ft_convert_int_to_str(res + is_neg, n, len);
	if (is_neg)
		res[0] = '-';
	return (res);
}
/*
int main()
{
    // Test cases
    int tests[] = {123, -456, 0, -2147483648, 2147483647, -23455633};
    size_t num_tests = sizeof(tests) / sizeof(tests[0]);

    char buffer[50]; // Buffer for standard sprintf conversion

    size_t i = 0;
    while (i < num_tests)
    {
        char *result_ft_itoa = ft_itoa(tests[i]);
        sprintf(buffer, "%d", tests[i]); // Convert using standard sprintf

        printf("ft_itoa(%d): %s, sprintf: %s\n",
        tests[i], result_ft_itoa, buffer);

        free(result_ft_itoa); // Free the memory allocated by ft_itoa
        i++;
    }

    return (0);
}
*/
/*
The ft_itoa function converts an integer to a string representation.
It handles negative numbers and allocates memory for the resulting string.
The function returns a pointer to the string, 
which should be freed by the caller. The function also handles the 
special case of the minimum integer value (-2147483648)
by returning a specific string representation.
*/