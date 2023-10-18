#include "main.h"
/**
 * reverse_array - reverse the order of array
 * @a: the pointer to the array
 * @n: the num of element of the array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int x, z;
	int y[20];

	for (x = 0; x < n; x++)
	{
	y[x] = *(a + x);
	}
	z = n - 1;
	for (x = 0; x < n; x++)
	{
	*(a + x) = y[z];
	z--;
	}
}
