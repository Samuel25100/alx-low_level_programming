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
