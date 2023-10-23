#include "main.h"
/**
 * _strspn - gets the length of a prefix substring from accept string
 * in s string
 * @s: the string to check from
 * @accept: the string of char to find
 * Return: num of the char found in s
 */
unsigned int _strspn(char *s, char *accept)
{
	int x, y;
	unsigned int z = 0;

	for (x = 0; *(accept + x); x++)
	{
	for (y = 0; *(s + y); y++)
	{
	if (*(s + y) == *(accept + x))
	{
	z = y + 1;
	return (z);
	}
	}
	}
	return (z);
}
