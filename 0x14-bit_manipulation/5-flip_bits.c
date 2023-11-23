#include "main.h"
/**
 * flip_bits - returns the number of bits you would need to flip to
 * get from one number to another
 * @n: the first number
 * @m: the second number
 * Return: number of bits you would need to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int num_b = 0;

	for (num_b = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			num_b++;
	}

	return (num_b);
}
