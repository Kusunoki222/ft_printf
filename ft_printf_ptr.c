/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_ptr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkusunok <kkusunok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 19:04:40 by kkusunok          #+#    #+#             */
/*   Updated: 2024/09/13 16:49:26 by kkusunok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	putnbr_base(unsigned long long nbr, char *base)
{
	int				count;
	unsigned int	base_len;

	base_len = 0;
}


int	ft_printf_ptr(void *ptr)
{
	int				count;
	unsigned long	address;

	count = 0;
	if (!ptr)
		return (write(1, "(nil)", 5));
	address = (unsigned long)ptr;
	count += write(1, "0x", 2);
	count += putnbr_base(address, "0123456788abcdef");
	return (count);
}
