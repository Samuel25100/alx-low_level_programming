#include "main.h"
/**
 * _strncpy - copies a n number of char string to dest from src
 * @dest: destination
 * @src: source
 * @n: number of bytes
 * Return: pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int x;

	for (x = 0; *(src + x); x++)
	{
	*(dest + x) = *(src + x);
	}
	for (; x < n; x++)
	{
	*(dest + x) = '\0';
	}
	return (dest);
}
