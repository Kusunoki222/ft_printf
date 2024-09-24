/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkusunok <kkusunok@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 17:21:59 by kkusunok          #+#    #+#             */
/*   Updated: 2024/09/24 16:42:01 by kkusunok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	print_hex_lower(unsigned long long nbr)
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

static int	print_hex_upper(unsigned long long nbr)
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

int	ft_printf_hex(unsigned int nbr, int sign)
{
	int					count;
	unsigned long long	address;

	count = 0;
	if (!nbr)
		return (write(1, "(NULL)", 5));
	address = (unsigned long long)nbr;
	if (sign == 0)
		count += print_hex_lower(address);
	if (sign == 1)
		count += print_hex_upper(address);
	return (count);
}

// # include	<stdio.h>
// # include	<unistd.h>

// int	main(void)
// {
// 	void	*ptr;

// 	// ptr = (void *)29;
// 	ptr = (void *)0x1234abcd;
// 	printf("Original: %p\n", ptr);
// 	ft_printf_ptr(ptr);
// 	write(1, "\n", 1);
// 	return (0);
// }