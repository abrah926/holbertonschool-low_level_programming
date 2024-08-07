#include "main.h"

/**
 * get_bit - Returns the value of a bit at a given index
 * @n: The number to check
 * @index: The index of the bit to get, starting from 0
 *
 * Return: The value of the bit at index index, or -1 if an error occurred
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int num_bits = sizeof(unsigned long int) * 8;

	if (index >= num_bits)
		return (-1);

	if ((n & (1UL << index)) != 0)
		return (1);
	else
		return (0);
}
