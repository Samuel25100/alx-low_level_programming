#include "search_algos.h"
#include <math.h>
/**
 * jump_search - searches for a value in an array using jump search alg
 * @array: pointer to the first array
 * @size: size of array
 * @value: the value we are looking for
 * Return: -1 else the index
 */
int jump_search(int *array, size_t size, int value)
{
	size_t x = 0, jm = sqrt(size), i = 0;

	if (array == NULL)
		return (-1);
	for (x = 0; x < size; x += jm)
	{
	/*if (array[x] == value)
	{
		printf("Value checked array[%ld] = [%d]\n", x, array[x]);
		return (x);
	}*/
	if (array[x] < value)
		printf("Value checked array[%ld] = [%d]\n", x, array[x]);
	else
	{
	printf("Value found between indexes [%ld] and [%ld]\n", x - jm, x);
		for(i = x - jm; i <= x; i++)
		{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
		}
	
	break;
	}
	}
	return (-1);
}
