#include "main.h"

/**
 * _strncpy - copies as string
 * @n: number of bytes
 * @dest: string copied
 * @src: string copy
 * Return: string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int x;

	for (x = 0; src[x] != '\0' && x < n; x++)
	{
		dest[x] = src[x];
	}
	while (x < n)
	{
		dest[x] = 0;
		x++;
	}
	return (dest);
}
