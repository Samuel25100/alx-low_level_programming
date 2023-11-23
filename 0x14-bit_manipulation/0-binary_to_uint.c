#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to the string of binary
 * Return: the result
 */
unsigned int binary_to_uint(const char *b)
{
	int x = 0;
	unsigned int result = 0;

	if (b == NULL)
		return (0);
	while (b[x])
	{
	if (b[x] != '0' && b[x] != '1')
		{
		return (0);
		}
	x++;
	}
	for (x = 0; b[x]; x++)
	{
		result = result << 1;
		if (b[x] == '1')
			result = result + 1;
	}
	return (result);
}
