#include "main.h"
int _sqrt(int n, int m);
/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: the int
 * Return: result
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
/**
 * _sqrt - find the square root
 * @m: the increment int
 * @n: the int
 * Return: result
 */
int _sqrt(int n, int m)
{
	int div = m * m;

	if (n < div)
	{
	return (-1);
	}
	if (n == div)
	{
	return (m);
	}
	return (_sqrt(n, m + 1));
}
