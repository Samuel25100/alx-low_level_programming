#include "main.h"
/**
 * _memset - fills the first n bytes of the memory area pointed to by s with the constant byte b
 * @s: is the pointer to the array
 * @b: the char to be filled in the array
 * @n: the number of byte to be filled into array
 * Return: pointer to s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
	*(s + x) = b;
	}
	return (s);
}
