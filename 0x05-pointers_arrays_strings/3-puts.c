#include "main.h"
/**
 * _puts - print the string followed by newline
 * @str: the string
 * Return: void
 */
void _puts(char *str)
{
	int x;

	for (x = 0; *(str + x); x++)
	{
		_putchar(*(str + x));
	}
	_putchar('\n');
}
