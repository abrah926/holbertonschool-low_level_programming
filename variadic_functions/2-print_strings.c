#include "variadic_functions.h"

/**
 * print_strings - prints a number of strings
 *
 * @separator: string to be printed between the strings
 * @n: number of strings
 *
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	char *s;
	unsigned int x;

	va_start(valist, n);
	for (x = 0; x < n; x++)
	{
		s = va_arg(valist, char *);
		if (s == NULL)
			printf("(nil)");
		else
			printf("%s", s);
		if (separator && x != n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(valist);
}
