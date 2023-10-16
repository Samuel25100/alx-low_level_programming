#include "main.h"
/**
 * _strlen - return the lenght og the string
 * @s: the string
 * Return: lenght
 */
int _strlen(char *s)
{
	int x;

	x = 0;
	while (*(s + x))
	{
	x++;
	}
	return (x);
}
/**
 * print_rev - print string in reverse
 * @s: the string
 * Return: void
 */
void print_rev(char *s)
{
	int x;

	x = _strlen(s);
	for (;x >= 0; x--)
	{
	_putchar(*(s + x));
	}
	_putchar('\n');
}
