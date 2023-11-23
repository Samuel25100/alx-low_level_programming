#include "main.h"

/**
 * get_endianness - prog checks the endianness
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	int x;
	char *y;

	x = 1;
	x = (char *)&x;
	return ((int)*y);
}

