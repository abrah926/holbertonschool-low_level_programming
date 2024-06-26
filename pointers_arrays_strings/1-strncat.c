#include "main.h"

/**
 * _strncat - concatenate two strings by number of bytes
 * @n: number of bytes
 * @src: dtring to cpy
 * @dest: string copied
 * Return: a pointer to the resuting string @dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int x, y;

	x = 0;
	while (dest[x] != '\0')
		x++;
	y = 0;
	while (src[y] != '\0' && y < n)
	{
		dest[x] = src[y];
		x++;
		y++;
	}
	return (dest);
}
