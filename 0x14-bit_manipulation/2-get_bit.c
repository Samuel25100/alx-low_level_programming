#include "main.h"
/**
 * get_bit - returns the value of a bit at a given index
 * @n: is the integer
 * @index: the index of the binary to be return
 * Return: the value of bit at index or -1 for error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int x;


	for (x = 0; x <= 63; n >>= 1, x++)
	{
	if (index == x)
		{
		return (n & 1);
		}
	}
	return (-1);
}
