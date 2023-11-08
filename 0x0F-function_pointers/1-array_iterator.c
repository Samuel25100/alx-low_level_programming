#include "function_pointers.h"
/**
 * array_iterator - executes a function given as a parameter on each
 * element of an array.
 * @array: the array
 * @size: the size of array
 * @action: the function pointer
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t x;

	if (array && action)
	for (x = 0; x < size; x++)
	{
	action(array[x]);
	}
}
