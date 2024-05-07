#include "search_algos.h"
/**
 * linear_search - searches for a value in an array using Linear search alg
 * @array: pointer to the first array
 * @size: size of array
 * @value: the value we are looking for
 * Return: -1 else the index
 */
int linear_search(int *array, size_t size, int value)
{
	size_t x = 0;

	if (array == NULL)
		return (-1);
	for (x = 0; x < size; x++)
	{
	if (array[x] == value)
	{
		printf("Value checked array[%ld] = [%d]\n", x, array[x]);
		return (x);
	}
	else
		printf("Value checked array[%ld] = [%d]\n", x, array[x]);
	}
	return (-1);
}
