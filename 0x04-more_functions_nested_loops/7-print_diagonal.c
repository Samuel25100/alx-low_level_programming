#include "main.h"
/**
 * print_diagonal - print n number of " " and one '\'
 * @n: num
 * Return: void
 */
void print_diagonal(int n)
{
	int x, y;

	if (n <= 0)
	{
	_putchar('\n');
	}
	else
	{
		for (x = 0; x < n; x++)
		{
		for (y = 0; y < n; y++)
		{
		if (y == x)
		_putchar('\\');
		else if (y < x)
		_putchar(' ');
		}
		_putchar('\n');
		}
	}
}
