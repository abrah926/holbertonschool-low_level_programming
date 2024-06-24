#include "main.h"

/**
 * puts2 - Prints every other character of a string,
 * starting with the first character.
 * @str: The string to proccess.
 *
 * Description: This function prints every other character of the string 'str',
 * followed by a new line character ('\n'). It starts printing from the first
 * character of the string.
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');
}
