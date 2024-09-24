/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_str.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkusunok <kkusunok@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 19:04:50 by kkusunok          #+#    #+#             */
/*   Updated: 2024/09/24 17:41:41 by kkusunok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_str(char *str)
{
	if (!str)
		str = "(null)";
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
	return (ft_strlen(str));
}
