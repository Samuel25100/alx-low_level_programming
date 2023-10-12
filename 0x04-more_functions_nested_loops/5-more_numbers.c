#include "main.h"
/**
 * more_numbers - print from 0 to 14
 * Return: void
 */
void more_numbers(void)
{
	int i, x, y, z;

	for (i = 0; i < 10; i++)
	{
	for (x = 0; x <= 14; x++)
	{
		y = x / 10;
		z = x % 10;
		if (x <= 9)
		{
		y = x;
		}
		_putchar(y + '0');
		if (x > 9)
		_putchar(z + '0');
	}
	_putchar('\n');
	}
}
