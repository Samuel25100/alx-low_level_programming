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

	for (x = 0; (s[x] >= 65 && s[x] <= 90) || (s[x] >= 97 && s[x] <= 122); x++)
	{
	for (y = 0; *(accept + y); y++)
	{
	if (*(accept + y) == *(s + x))
	{
	z++;
	}
	else if (*(accept + y) == '\0')
	{
	return (z);
	}
	}
	}
	return (z);
}
