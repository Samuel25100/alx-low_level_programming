#include "main.h"
/**
 * _strncat - concatenates at most n bytes from src
 * @dest: destination of string
 * @src: source of string
 * @n: num of byte to concatenates on dest
 * Return: pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int x, y;

	x = 0;
	while (*(dest + x))
	{
	x++;
	}
	for (y = 0; y < n && *(src + y); y++)
	{
	*(dest + x) = *(src + y);
	x++;
	}
	*(dest + x) = '\0';
	return (dest);
}
