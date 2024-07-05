#include "main.h"
#include <stdlib.h>

char *_memset(char *s, char b, unsigned int n);
/**
 * _calloc - allocates memory for an array of nmemb elements of size bytes
 *
 * @nmemb: number of elements
 * @size: size of elements
 *
 * Return: pointer to the allocated memory
 *
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (!nmemb || !size)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (!ptr)
		return (NULL);
	_memset(ptr, 0, nmemb * size);
	return (ptr);
}
/**
 * _memset - fills memory
 *
 * @s: memory area
 * @n: number of bytes
 * @b: constant byte
 *
 * Return: pointer to memory area
 *
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
		*(s + x) = b;
	return (s);
}
