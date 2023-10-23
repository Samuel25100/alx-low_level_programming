#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two diagonals of a square
 * matrix of integers
 * @a: the pointer to the array
 * @size: the size of square matrix
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int x, z = 0;

	for (x = 0; x < size; x++)
	{
	z = z + a[x * size + x];
	}
	printf("%d, ", z);
	z = 0;
	for (x = 0; x < size; x++)
	{
	z = z + a[x * size + (size - 1 - x)];
	}
	printf("%d\n", z);
}
