#include "main.h"
#include <stdio.h>

/**
 * _puts - entry point
 *
 * Description: tu connais flemme un peu
 *@str: poiteur de la chaine a compter
 * Return: void
 */

void _puts(char *str)
{

	int n = 0;

	while (str[n])
	{
		_putchar(str[n]);
		++n;
	}

	_putchar('\n');
}
