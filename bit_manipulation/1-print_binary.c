#include "main.h"

/**
 * print_binary - Prints the binary representation of an unsigned long int
 * @n: The number to be printed in binary
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask;
	int leading_zero = 1;

	mask = 1UL << (sizeof(n) * 8 - 1);

	while (mask > 0)
	{
		if ((n & mask) != 0)
		{
			_putchar('1');
			leading_zero = 0;
		}
		else if (!leading_zero)
		{
			_putchar('0');
		}
		mask >>= 1;
	}

	if (leading_zero)
	{
		_putchar('0');
	}
}
