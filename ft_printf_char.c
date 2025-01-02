/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_char.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkusunok <kkusunok@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 18:59:14 by kkusunok          #+#    #+#             */
/*   Updated: 2025/01/02 19:09:59 by kkusunok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_char(char p)
{
	if (!p)
		return (write(1, "\0", 1));
	write(1, &p, 1);
	return (1);
}

// int	main(void)
// {
// 	int	ch;

// 	ch = 0;
// 	ft_printf_char(ch);
// 	printf("%c",ch);

// 	return(0);
// }