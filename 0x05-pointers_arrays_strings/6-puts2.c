#include "main.h"
/**
 * puts2 - print every half of the string
 * @str: the string
 * Return: 0
 */
void puts2(char *str)
{
	int x;

	for (x = 0; *(str + x); x++)
	{
	if (!(x % 2))
	{
	_putchar(*(str + x));
	}
	}
	_putchar('\n');
}
