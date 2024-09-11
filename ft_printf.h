/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkusunok <kkusunok@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 16:23:38 by kkusunok          #+#    #+#             */
/*   Updated: 2024/09/11 16:25:12 by kkusunok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include	<unistd.h>
# include	<stdio.h>
# include	<stdarg.h>

int	ft_printf(const char *format, ...);
int	ft_printf_ptr(unsigned long long ptr);
int	ft_printf_char(char p);
int	ft_printf_int(int decimal);
int	ft_print_str(char *str);
int	ft_printf_unsigned(unsigned int n);

#endif