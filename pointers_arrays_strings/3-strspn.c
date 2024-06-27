#include "main.h"

/**
 * _strspn - Gets the lenght of a prefix substring.
 * @s: The initial segment to be scanned.
 * @accept: The list of characters to match in s.
 *
 * Return: The number of bytes in the initial segment of s
 * which consist only of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;

	while (*s)
	{
		char *a = accept; 
		int found = ;

		while (*a) 
		{
			if (*s == *a)
			{
				found = 1;
				break;
			}
			a++;
		}
		if (found)
		{
			count++
		}
		else
		{
			break;
		}
		s++;
	}

	return (count);
}
