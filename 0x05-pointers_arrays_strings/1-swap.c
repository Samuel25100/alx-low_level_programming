#include "main.h"
/**
 * swap_int - swap valu of a and b
 * @a: the first value
 * @b: the second value
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
