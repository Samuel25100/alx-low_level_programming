#include "main.h"
/**
 * print_last_digit - print the last digit
 * @n: the int
 * Return: n
 */
int print_last_digit(int n)
{
	if (n < 0)
	{
	n = n * -1;
	}
		n = n % 10;
	if (n < 0)
	{
	n = n * -1;
	}
	_putchar(n + '0');
	return (n);
}
