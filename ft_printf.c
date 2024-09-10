/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkusunok <kkusunok@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 17:30:39 by kkusunok          #+#    #+#             */
/*   Updated: 2024/09/10 17:33:38 by kkusunok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	exec_printf(const char *format, va_list args);

int	ft_printf(const char *format, ...)
{
	size_t	count;
	va_list	args;

	count = 0;
	va_start(args, format);
	count = exec_printf(format, args);
	va_end(args);
	return (count);
}

static int	exec_printf(const char *format, va_list args)
{
	int	nbr;

	nbr = 0;
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == '%')
				nbr += write(1, "%", 1);
			else if (*format == 'c')
				nbr += ft_print_char(va_arg(args, char));
			else if (*format == 's')
				nbr += ft_print_str(va_arg(args, char *));
			else if (*format == 'p')
				nbr += ft_printf_ptr(va_arg(args, void *));
			else if (*format == 'i' || *format == 'd')
				nbr += ft_printf_int(va_arg(args, int));
			else if (*format == 'u')
				nbr += ft_printf_unsigned(va_arg(args, unsigned int));
			else if (*format == 'x' || *format == 'X')
				nbr += ft_printf_hex(va_arg(args, unsigned int));
		}
		else
			nbr += write(1, format, 1);
		format++;
	}
	return (nbr);
}

/*
int	main(void)
{
	char c = 'A';
	char str[] = "Hello, World!";
	void *ptr = (void *)0x1234abcd;
	int dec = 12345;
	int integer = -12345;
	unsigned int udec = 54321;
	int hex = 0xabc123;

	// %c: Prints a single character
	printf("Character: %c\n", c);
	ft_printf("ft_Character: %c\n\n", c);
	// %s: Prints a string
	printf("String: %s\n", str);
	ft_printf("ft_String: %s\n\n", str);
	// %p: Prints a void * pointer in hexadecimal format
	printf("Pointer: %p\n", ptr);
	ft_printf("ft_Pointer: %p\n\n", ptr);
	// %d: Prints a decimal (base 10) number
	printf("Decimal: %d\n", dec);
	ft_printf("ft_Decimal: %d\n\n", dec);
	// %i: Prints an integer in base 10
	printf("Integer: %i\n", integer);
	ft_printf("ft_Integer: %i\n\n", integer);
	// %u: Prints an unsigned decimal (base 10) number
	printf("Unsigned Decimal: %u\n", udec);
	ft_printf("ft_Unsigned Decimal: %u\n\n", udec);
	// %x: Prints a number in hexadecimal (base 16) lowercase format
	printf("Hexadecimal (lowercase): %x\n", hex);
	ft_printf("ft_Hexadecimal (lowercase): %x\n\n", hex);
	// %X: Prints a number in hexadecimal (base 16) uppercase format
	printf("Hexadecimal (uppercase): %X\n", hex);
	ft_printf("ft_Hexadecimal (uppercase): %X\n\n", hex);
	// %%: Prints a percent sign
	printf("Percent Sign: %%\n");
	ft_printf("ft_Percent Sign: %%\n\n");

// Character: A
// String: Hello, World!
// Pointer: 0x1234abcd
// Decimal: 12345
// Integer: -12345
// Unsigned Decimal: 54321
// Hexadecimal (lowercase): abc123
// Hexadecimal (uppercase): ABC123
// Percent Sign: %

	return (0);
}
*/
