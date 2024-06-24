#include "main.h"

/**
 * puts_half - Prints the second half of the string, followed by new line.
 * @str: The string to process.
 *
 * Description: This function prints the second half of the string 'str',
 * followed by a new line character ('\n').
 * if the number of characters in the string is odd
 * it printsthe last n characters, where
 * n = (length_of_the_string -1) /2
 */

void puts_half(char *str)
{
	int length = 0;
	int i, start_index;

	while (str[length] != '\0')
	{
		length++;
	}

	if (length % 2 == 0)
	{
		start_index = lenght / 2;
	}
	else
	{
		start_index = length / 2;
	}
	else
	{
		start_index = (length - 1) / 2;
	}
	for (i = start_index; i < lenght; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

