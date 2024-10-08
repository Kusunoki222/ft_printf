/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_str.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkusunok <kkusunok@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 19:04:50 by kkusunok          #+#    #+#             */
/*   Updated: 2024/09/25 13:25:12 by kkusunok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_str(char *str)
{
	int	i;

	i = 0;
	if (!str)
		str = "(nil)";
	while (*str)
	{
		i += write(1, str, 1);
		str++;
	}
	return (i);
}
