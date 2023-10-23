#include "main.h"
#include <stdio.h>
/**
 * _strpbrk - locates the first occurrence in the string s of any of
 * the bytes in the string accept
 * @s: string to be search from
 * @accept: the string of char to be search from s
 * Return: the pointer to first occurrence
 */
char *_strpbrk(char *s, char *accept)
{
	int x, y;

	for (x = 0; *(s + x); x++)
	{
	for (y = 0; *(accept + y); y++)
	{
	if (*(accept + y) == *(s + x))
	{
	return (s + x);
	}
	}
	}
	return ('\0');
}
