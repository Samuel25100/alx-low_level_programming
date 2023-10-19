#include "main.h"
/**
 * print_number - prints an integer as string
 * @n: the integer
 * Return: void
 */
void print_number(int n)
{
	unsigned int x;

	if (n < 0)
	{
	x = n * -1;
	_putchar('-');
	}
	else
	{
	x = n;
	}
	if (n / 10)
	{
	print_number(x / 10);
	}
	_putchar((x % 10) + '0');
}
