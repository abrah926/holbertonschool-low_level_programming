#include "main.h"

/**
 * reverse_array - reverses the content of an arry of integers
 * @n: number of elements of array
 * @a: array of integers
 */
void reverse_array(int *a, int n)
{
	int x, temp;

	for (x = 0; x < n / 2; x++)
	{
		temp = a[x];
		a[x] = a[n - x - 1];
		a[n - x - 1] = temp;
	}
}
