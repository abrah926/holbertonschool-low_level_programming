#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 *
 * @s1: string source
 * @s2: string destination
 * @n: number of bytes
 *
 * Return: NULL if function fails
 * pointer to newly allocated space in memory
 *
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int x, y, l1, l2;
	char *p;

	l1 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (x = 0; s1[x]; ++x)
		++l1;
	l2 = l1 + n;
	p = malloc(sizeof(char) * (l2 + 1));
	if (!p)
		return (NULL);
	for (x = 0; x < l1; ++x)
	{
		p[x] = s1[x];
	}
	for (y = 0; y < n; ++y, ++x)
	{
		p[x] = s2[y];
	}
	p[x] = '\0';
	return (p);
}
