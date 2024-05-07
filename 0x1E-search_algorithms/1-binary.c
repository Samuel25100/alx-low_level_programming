#include "search_algos.h"
/**
 * binary_search - searches a value in sorted array using the Binary algorithm
 * @array: pointer to first array
 * @size: size of array
 * @value: the value we are looking for
 * Return: -1 else the index of value
 */
int binary_search(int *array, size_t size, int value)
{
	size_t mid = 0, left = 0, right = 0, x = 0;

	if (array == NULL)
		return (-1);

	right = size - 1;
	while (left <= right)
	{
		printf("Searching in array:");
		for (x = left; x <= right; x++)
		{
		if (x == right)
			printf(" %d\n", array[x]);
		else
			printf(" %d,", array[x]);
		}
	/* Divide the size and compare */
	mid = left + ((right - left) / 2);
	if (array[mid] == value)
		return (mid);
	if (value > array[mid])
	{
		left = mid + 1;
		x = left;
	}
	else
		right = mid - 1;
	}
	return (-1);
}
