#include "main.h"
/**
 * _strchr -  locates a character in a string
 * @s: the string pointer
 * @c: the char to be found
 * Return: the pointer to first occurrence of the character c
 */
char *_strchr(char *s, char c)
{
	int x;

	for (x = 0; *(s + x); x++)
	{
	if (*(s + x) == c)
	{
	return (s + x);
	}
	}
	return ('\0');
}
