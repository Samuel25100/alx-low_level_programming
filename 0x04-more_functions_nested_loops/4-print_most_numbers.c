#include "main.h"
/**
 * print_most_numbers - print from 0 to 9 except 2 and 4
 * Return: void
 */
void print_most_numbers(void)
{
	int x;

	for (x = 48; x <= 57; x++)
	{
		if (x == 50 || x == 52)
		{
		continue;
		}
		_putchar(x);
	}
	_putchar('\n');
}
