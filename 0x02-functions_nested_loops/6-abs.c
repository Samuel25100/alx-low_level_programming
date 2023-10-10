#include "main.h"
/**
 * _abs - return the absolute value of n
 * @n: the char
 * Return: 0
 */
int _abs(int n)
{
	if (n < 0)
	{
	return (n * -1);
	}
	else if (n > 0)
	{
	return (n);
	}
	return (0);
}
