#include "main.h"
/**
 * _memcpy - copies memory area
 * @dest: the destination memory to be copied on
 * @src: the source of char
 * @n: num of byte to be copied
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
	*(dest + x) = *(src + x);
	}
	return (dest);
}
