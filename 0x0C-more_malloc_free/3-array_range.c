#include "main.h"
/**
 * array_range - creates an array of integers contain
 * all the values from min (included) to max (included)
 * @min: minimum value
 * @max: maximum value
 * Return: pointer of the array
 */
int *array_range(int min, int max)
{
	int *p, x, y = 0;

	if (min > max)
		return (NULL);

	p = malloc(sizeof(int) * (max - min + 1));
	if (p == NULL)
		return (NULL);
	for (x = min; x <= max; x++)
	{
	*(p + y) = x;
	y++;
	}
	return (p);
}
