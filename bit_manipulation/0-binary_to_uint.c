#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned integer
 * @b: Pointer to a string containing the binary number
 *
 * Return: The converted number,
 * or 0 if there are invalid characters or b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;

	if (b == NULL)
		return (0);

	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);

		num = (num << 1) | (*b - '0');
		b++;
	}

	return (num);
}
