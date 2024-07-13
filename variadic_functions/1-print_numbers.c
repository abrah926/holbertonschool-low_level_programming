#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_numbers - function that prints numbers
 *
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 *
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int x;
	va_list valist;

	va_start(valist, n);
	for (x = 0; x < n; x++)
	{
		printf("%d", va_arg(valist, int));
		if (separator && x != n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(valist);
}
