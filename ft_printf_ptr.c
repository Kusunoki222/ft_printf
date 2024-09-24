/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_ptr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkusunok <kkusunok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 19:04:40 by kkusunok          #+#    #+#             */
/*   Updated: 2024/09/24 15:29:29 by kkusunok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	print_hex(unsigned long long nbr)
{
	int		count;
	char	*base;

	count = 0;
	base = "0123456789abcdef";
	if (nbr >= 16)
		count += print_hex(nbr / 16);
	count += write(1, &base[nbr % 16], 1);
	return (count);
}

int	ft_printf_ptr(void *ptr)
{
	int					count;
	unsigned long long	address;

	count = 0;
	if (!ptr)
		return (write(1, "(nil)", 5));
	address = (unsigned long long)ptr;
	count += write(1, "0x", 2);
	count += print_hex(address);
	return (count);
}

// # include	<stdio.h>
// # include	<unistd.h>
// int	main(void)
// {
// 	void	*ptr;
// 	// ptr = (void *)29;
// 	ptr = (void *)0x1234abcd;
// 	printf("hogehoge: %p\n", ptr);
// 	ft_printf_ptr(ptr);
// 	write(1, "\n", 1);
// 	return (0);
// }