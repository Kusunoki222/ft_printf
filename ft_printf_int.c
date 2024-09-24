/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_int.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkusunok <kkusunok@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 19:04:37 by kkusunok          #+#    #+#             */
/*   Updated: 2024/09/24 16:36:34 by kkusunok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_int(int decimal)
{
	char	*d;
	int		i;

	i = 0;
	d = ft_itoa(decimal);
	while (*d)
	{
		write(1, &d, 1);
		d++;
		i++;
	}
	return (i);
}
