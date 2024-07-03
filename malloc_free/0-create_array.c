#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char
 *
 * @size: size of array
 * @c: char to initialize array
 *
 * Return: NULL if size = 0, NULL if it fails
 * pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int x;
	char *array;

	if (size == 0)
		return (NULL);
	array = malloc(size * sizeof(char));
	if (array == NULL)
	{
		return (NULL);
	}
	for (x = 0; x < size; x++)
	{
		*(array + x) = c;
	}
	return (array);
}
