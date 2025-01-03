/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkusunok <kkusunok@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 17:21:59 by kkusunok          #+#    #+#             */
/*   Updated: 2025/01/03 16:13:51 by kkusunok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	print_hex_lower(unsigned int nbr)
{
	int		count;
	char	*base;

	count = 0;
	base = "0123456789abcdef";
	if (nbr >= 16)
		count += print_hex_lower(nbr / 16);
	count += write(1, &base[nbr % 16], 1);
	return (count);
}

static int	print_hex_upper(unsigned int nbr)
{
	int		count;
	char	*base;

	count = 0;
	base = "0123456789ABCDEF";
	if (nbr >= 16)
		count += print_hex_upper(nbr / 16);
	count += write(1, &base[nbr % 16], 1);
	return (count);
}

int	ft_printf_hex(unsigned int adress, int sign)
{
	int				count;

	count = 0;
	if (adress == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	if (sign == 0)
		count += print_hex_lower(adress);
	if (sign == 1)
		count += print_hex_upper(adress);
	return (count);
}

// # include	<stdio.h>
// # include	<unistd.h>

// int	main(void)
// {
// 	unsigned int	ptr;

// 	ptr = 17;
// 	printf("Original x: %x\n", ptr);
// 	printf("Original X: %X\n", ptr);
// 	ft_printf_hex(ptr, 0);
// 	ft_printf_hex(ptr, 1);
// 	write(1, "\n", 1);
// 	return (0);
// }