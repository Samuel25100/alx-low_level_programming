#include "function_pointers.h"
/**
 * int_index - searches for an integer
 * @array: the array of the integer
 * @size: size of array
 * @cmp: the function pointer
 * Return: the result
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	for (x = 0; x < size; x++)
	{
	cmp(array[x]);
	if (cmp(array[x]) != 0)
		return (x);
	}
	return (-1);
}
