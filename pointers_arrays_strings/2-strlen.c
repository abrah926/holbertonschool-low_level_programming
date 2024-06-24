/* _strlen.c */

#include "main.h"

/**
 * _strlen - Returns the lenght of a string.
 * @s: Pointer to a string (null-terminated array of characters).
 *
 * Return: Lenght of a string.
 */

int _strlen(char *s)
{
	int lenght = 0;

	while (*s != '\0')
	{
		lenght++;
		s++;
	}

		return (lenght);
}


