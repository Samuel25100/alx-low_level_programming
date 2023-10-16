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
/**
 * rev_string - print string in reverse
 * @s: the string
 * Return: void
 */
void rev_string(char *s)
{
	int x, y, z;
	char arr[20];

	x = (_strlen(s)) - 1;
	y = 0;
	for (z = x; z >= 0; z--)
	{
	arr[y] = *(s + z);
	y++;
	}
	for (y = 0; y <= x; y++)
	{
	s[y] = arr[y];
	}
}
