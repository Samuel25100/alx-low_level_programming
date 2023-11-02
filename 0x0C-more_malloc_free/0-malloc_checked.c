#include "main.h"
/**
 * malloc_checked - allocates memory using malloc
 * @b: the size of the allocated mem
 * Return: pointer to the malloc
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
	{
	exit(98);
	}
	return (p);
}
