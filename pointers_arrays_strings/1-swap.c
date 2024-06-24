/* swap_int.c */

#include "main.h"

/**
 * swap_int - Swaps the value of two integers.
 * @a: Pointer to first integer.
 * @b: Pointer to the second interger.
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
