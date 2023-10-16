#include "main.h"
/**
 * _strlen - return the lenght og the string
 * @s: the string
 * Return: lenght
 */
int _strlen(char *s)
{
	int x,y;

	x = 0;
	y = 1;
	while (*(s + x))
	{
	x++;
	y++;
	}
	return (y);
}
/**
 * puts_half - print half of the string
 * @str: the string
 * Return: void
 */
void puts_half(char *str)
{
	int x, y;

	x = _strlen(str);
	if (!(x % 2))
	{
	x = x / 2;
	}
	else
	{
	x = (x - 1) / 2;
	}
	for (y = 0; *(str + y); y++)
	{
	if (y >= x)
	{
	_putchar(*(str + y));
	}
	}
	_putchar('\n');
}
