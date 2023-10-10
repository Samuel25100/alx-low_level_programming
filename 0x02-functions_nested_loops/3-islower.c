#include "main.h"
/**
 * _islower - check for lower case letter return 1 for lower c
 * @c: the char
 * Return: 0
 */
int _islower(int c)
{
	if (c <= 122 && c >= 97)
	{
	return (1);
	}
	return (0);
}
