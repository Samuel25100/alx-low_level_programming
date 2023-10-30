#include "main.h"
/**
 * create_array - creates an array of chars, and initializes it
 * with a specific char.
 * @size: the size of the array
 * @c: the char to initialized
 * Return: pointer to the char
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int x;

	p = malloc(sizeof(char) * size);
	if (p == NULL || size == 0)
	{
	return (NULL);
	}
	for (x = 0; x < size; x++)
	{
	*(p + x) = c;
	}
	return (p);
}
