#include "main.h"
/**
 * print_triangle - print tringle in size
 * @size: the size of the triangle
 * Return: void
 */
void print_triangle(int size)
{
	int x, y, z;

	if (size <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (x = 1; x <= size; x++)
	{
	z = 32;
	for (y = size; y >= 1; y--)
	{
	if (y == x)
	{
	z = 35;
	}
	_putchar(z);
	}
	_putchar('\n');
	}
	}
}
