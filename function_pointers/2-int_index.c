#include "function_pointers.h"

/**
 * int_index - searches for an integer
 *
 * @array: array of integers
 * @size: number of elements in array
 * @cmp: pointer to the function
 *
 * Return: the index of the first element
 *
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);
	for (index = 0; index < size; ++index)
	{
		if (cmp(array[index]) != 0)
			return (index);
	}
	return (-1);
}
