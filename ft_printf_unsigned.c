/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_unsigned.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkusunok <kkusunok@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 19:04:54 by kkusunok          #+#    #+#             */
/*   Updated: 2024/09/11 16:27:44 by kkusunok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_putnbr_unsigned(unsigned int n)
{
	if (n >= 10)
	{
		ft_putnbr_unsigned(n / 10);
		ft_putnbr_unsigned(n % 10);
	}
	else
	{
		write(1, (n + '0'), 1);
	}
}

int	ft_printf_unsigned(unsigned int n)
{
	int				len;
	unsigned int	temp;

	len = 0;
	temp = n;
	while (temp != 0)
	{
		len++;
		temp /= 10;
	}
	if (n == 0)
		len = 1;
	ft_putnbr_unsigned(n);
	return (len);
}
