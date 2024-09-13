# include	<unistd.h>
# include	<stdio.h>

int	main(void)
{
	char c = 'A';
	char str[] = "Hello, World!";
	void *ptr = (void *)0x1234abcd;
	int dec = 12345;
	int integer = -12345;
	unsigned int udec = 54321;
	int hex = 0xabc123;

	printf("single character: %c\n", c);
	// ft_printf("ft_Character: %c\n\n", c);

	printf("String: %s\n", str);
	// ft_printf("ft_String: %s\n\n", str);

	printf("Prints a void * pointer in hexadecimal: %p\n", ptr);
	// ft_printf("ft_Pointer: %p\n\n", ptr);

	printf("decimal (base 10) number: %d\n", dec);
	// ft_printf("ft_Decimal: %d\n\n", dec);

	printf("integer in base 10: %i\n", integer);
	// ft_printf("ft_Integer: %i\n\n", integer);

	printf("unsigned decimal (base 10) number: %u\n", udec);
	// ft_printf("ft_Unsigned Decimal: %u\n\n", udec);

	printf("hexadecimal (base 16) lowercase: %x\n", hex);
	// ft_printf("ft_Hexadecimal (lowercase): %x\n\n", hex);

	printf("hexadecimal (base 16) uppercase: %X\n", hex);
	// ft_printf("ft_Hexadecimal (uppercase): %X\n\n", hex);

	printf("Percent Sign: %%\n");
	// ft_printf("ft_Percent Sign: %%\n\n");

	return (0);
}
