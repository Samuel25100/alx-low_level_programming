#include "main.h"
/**
 * print_sign - return 1 if n is +ve -1 if n -ve
 * @n: the char
 * Return: 0
 */
int print_sign(int n)
{
	if (n < 0)
	{
	return (-1);
	}
	else if (n > 0)
	{
	return (1);
	}
	return (0);
}