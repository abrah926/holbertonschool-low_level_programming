/* rev_string.c */

#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: Pointer to the string to be reversed.
 */

void rev_string(char *s)
{
	char *begin = s;
	char *end = s;
	char temp;

	while (*end != '\0')
	{
		end++;
	}
	end--;

	while (begin < end)
	{
		temp = *begin;
		*begin = *end;
		*end = temp;
		begin++;
		end--;
	}
}
