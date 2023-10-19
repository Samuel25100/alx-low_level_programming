#include "main.h"
/**
 * leet - encodes a string into 1337
 * @str: the string
 * Return: the pointer to str
 */
char *leet(char *str)
{
	char ar1[] = "AEOTLaeotl";
	char ar2[] = "4307143071";
	int x, y;

	for (x = 0; *(str + x); x++)
	{
	for (y = 0; y < 10; y++)
	{
	if (*(str + x) == ar1[y])
	{
	*(str + x) = ar2[y];
	}
	}
	}
	return (str);
}
