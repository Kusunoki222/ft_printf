/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkusunok <kkusunok@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 18:37:02 by kkusunok          #+#    #+#             */
/*   Updated: 2024/09/24 16:43:02 by kkusunok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include "ft_printf.h"

size_t	ft_strlen(const char *str)
{
	size_t	length;

	length = 0;
	if (!str)
		return (0);
	while (*str != '\0')
	{
		str++;
		length++;
	}
	return (length);
}

// int	main(void)
// {
// 	char	text[] = "Hello World";
// 	int	length_main = ft_strlen(text);
// 	printf("文字列の長さ: %d\n", length_main);
// 	return (0);
// }