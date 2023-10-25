#include "main.h"
/**
 * _strlen_recursion - returns the length of a string.
 * @s: the string
 * Return: length
 */
int _strlen_recursion(char *s)
{
	int x = 0;

	if (*s)
	{
	x++;
	return (x + _strlen_recursion(s + 1));
	}
	return (0);
}
