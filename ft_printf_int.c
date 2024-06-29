/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_int.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkusunok <kkusunok@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 19:04:37 by kkusunok          #+#    #+#             */
/*   Updated: 2024/06/29 16:59:05 by kkusunok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_int(int decimal)
{
	char	*d;
	int		i;

	d = ft_itoa(decimal);
	while (*d)
	{
		write(1, d, 1);
		d++;
		i++;
	}
	return (i);
}
