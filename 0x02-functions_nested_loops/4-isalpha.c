#include "main.h"
/**
 * _isalpha - check for alphabet letter return 1 when it found
 * @c: the char
 * Return: 0
 */
int _isalpha(int c)
{
	if ((c <= 122 && c >= 97) || (c >= 65 && c <= 90))
	{
	return (1);
	}
	return (0);
}
