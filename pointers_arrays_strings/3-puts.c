/* _puts.c */

#include "main.h"

/**
 * _puts - Prints a string followed by a new line to stdout.
 * @str: Pointer to the string to be printed.
  */

void _put(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
