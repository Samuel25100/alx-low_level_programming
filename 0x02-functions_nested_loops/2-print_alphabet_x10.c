#include "main.h"
/**
 * print_alphabet_x10 - print a-z 10x time
 * Return: void
 */
void print_alphabet_x10(void)
{
	int x, y;

	for (x = 0; x < 10; x++)
	{
	for (y = 97; y <= 122; y++)
	{
		_putchar(y);
	}
		_putchar('\n');
	}
}
