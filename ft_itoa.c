/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkusunok <kkusunok@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 19:18:33 by kkusunok          #+#    #+#             */
/*   Updated: 2024/09/24 16:43:17 by kkusunok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include "ft_printf.h"

static int	nbr_len(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len = 1;
	while (n != 0)
	{
		len++;
		n = n / 10;
	}
	return (len);
}

static char	*to_char(char *str, unsigned int number, int len)
{
	while (number > 0)
	{
		str[len--] = '0' + (number % 10);
		number = number / 10;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	char			*result;
	int				nlen;
	unsigned int	nbr;

	nlen = nbr_len(n);
	result = (char *)malloc(sizeof(char) * (nlen + 1));
	if (!result)
		return (NULL);
	result[nlen] = '\0';
	if (n == 0)
		result[0] = '0';
	if (n < 0)
	{
		result[0] = '-';
		nbr = -n;
	}
	else
		nbr = n;
	result = to_char(result, nbr, nlen - 1);
	return (result);
}

// int main(void)
// {
// 	int test_values[] = {0, 123, -456, 2147483647, -2147483648};
// 	size_t num_tests = sizeof(test_values) / sizeof(test_values[0]);
// 	for (size_t i = 0; i < num_tests; i++)
// 	{
// 		char *result = ft_itoa(test_values[i]);
// 		if (result)
// 		{
// 			printf("ft_itoa(%d) = %s\n", test_values[i], result);
// 			free(result);
// 		}
// 		else
// 		{
// 			printf("ft_itoa(%d) failed to allocate memory\n", test_values[i]);
// 		}
// 	}
// 	return 0;
// }
