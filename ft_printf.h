/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkusunok <kkusunok@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 16:23:38 by kkusunok          #+#    #+#             */
/*   Updated: 2024/09/24 17:29:05 by kkusunok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include	<unistd.h>
# include	<stdio.h>
# include	<stdarg.h>
# include	<stddef.h>
# include	"libft/libft.h"

int		ft_printf(const char *format, ...);
int		ft_printf_char(char p);
int		ft_printf_hex(unsigned int nbr, int sign);
int		ft_printf_int(int decimal);
int		ft_printf_ptr(void *ptr);
int		ft_printf_str(char *str);
int		ft_printf_unsigned(unsigned int n);

#endif