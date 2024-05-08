#include "search_algos.h"
/**
 * interpolation_search - search for value in array using intepolation algtrhm
 * @array: pointer to the first element of the array
 * @size: size of the array
 * @value: the value we are looking for
 * Return: index else -1
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t h = size - 1, l = 0;
	size_t re = 0;

	if (array == NULL || size == 0)
		return (-1);
	while (l <= h && value >= array[l])
	{
	re = ((double)(h - l) / (array[h] - array[l])) * (value - array[l]);
	re = l + re;

	if (re < size)
		printf("Value checked array[%ld] = [%d]\n", re, array[re]);
	else if (re > size)
	{
		printf("Value checked array[%ld] is out of range\n", re);
		break;
	}
	if (array[re] == value)
		return (re);
	if (array[re] < value)
		l = re + 1;
	else
		h = re - 1;
	}
	return (-1);
}
