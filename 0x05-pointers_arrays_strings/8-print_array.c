#include "main.h"
#include <stdio.h>
/**
 * print_array - print n number of array a
 * @a: the array
 * @n: num
 * Return: void
 */
void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
	printf("%d, ", a[x]);
	}
}
