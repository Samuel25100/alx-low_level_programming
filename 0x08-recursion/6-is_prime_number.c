#include "main.h"
int is_prime(int n, int m);
/**
 * is_prime_number - returns 1 if the input integer is a prime numbe
 * otherwise return 0
 * @n: the int
 * Return: result
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	if (n <= 3)
		return (1);
	return (is_prime(n, n / 2));
}
/**
 * is_prime - check the num is prime or not
 * @n: the int
 * @m: the divisor
 * Return: result
 */
int is_prime(int n, int m)
{
	if (m == 1)
		return (1);
	if (n % m == 0)
	{
	return (0);
	}
	return (is_prime(n, m - 1));
}
