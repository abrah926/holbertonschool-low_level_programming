#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 *
 * @s1: string one
 * @s2: string two
 *
 * Return: pointer to newly allocated space in memory with content s! and s2
 * NULL on failure
 *
 */
char *str_concat(char *s1, char *s2)
{
	char *s;
	unsigned int x, y, l1, l2;

	if (s1 == NULL)
		x = 0;
	else
	{
		for (x = 0; s1[x]; ++x)
			;
	}
	if (s2 == NULL)
		y = 0;
	else
	{
		for (y = 0; s2[y]; ++y)
			;
	}
	l1 = 1 + x + y;
	s = malloc(l1 * sizeof(char));
	if (s == NULL)
		return (NULL);
	for (l2 = 0; l2 < x; ++l2)
		s[l2] = s1[l2];
	for (l2 = 0; l2 < y; ++l2)
		s[l2 + x] = s2[l2];
	s[x + y] = '\0';
	return (s);
}
