/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkusunok <kkusunok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 17:21:59 by kkusunok          #+#    #+#             */
/*   Updated: 2024/09/24 15:14:01 by kkusunok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "ft_printf.h"
# include	<stdio.h>
# include	<unistd.h>

static int	print_hex_x(unsigned long long nbr)
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

static int	print_hex_X(unsigned long long nbr)
{
	int		count;
	char	*base;

	count = 0;
	base = "0123456789ABCDEF";
	if (nbr >= 16)
		count += print_hex(nbr / 16);
	count += write(1, &base[nbr % 16], 1);
	return (count);
}

int	ft_printf_hex(unsigned int nbr, int sign)
{
	int					count;
	unsigned long long	address;

	count = 0;
	if (!nbr)
		return (write(1, "(nil)", 5));
	address = (unsigned long long)nbr;
	if (sign == 0)
		count += print_hex_x(address);
	if (sign == 1)
		count += print_hex_X(address);
	return (count);
}

int	main(void)
{
	void	*ptr;

	// ptr = (void *)29;
	ptr = (void *)0x1234abcd;
	printf("Original: %p\n", ptr);
	ft_printf_ptr(ptr);
	write(1, "\n", 1);
	return (0);
}

