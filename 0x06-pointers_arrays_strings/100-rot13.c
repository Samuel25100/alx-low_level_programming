#include "main.h"
/**
 * rot13 - encodes a string using rot13
 * @str: the string
 * Return: pointer to str
 */
char *rot13(char *str)
{
char ar1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char ar2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int x, y;

	for (x = 0; *(str + x); x++)
	{
	for (y = 0; y < 52; y++)
	{
	if (*(str + x) == ar1[y])
	{
	*(str + x) = ar2[y];
	break;
	}
	}
	}
	return (str);
}
