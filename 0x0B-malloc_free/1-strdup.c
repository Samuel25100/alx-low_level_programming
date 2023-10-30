#include "main.h"
/**
 * _strdup - returns a pointer to a newly allocated space in
 * memory, which contains a copy of the string given as a parameter
 * @str: the string
 * Return: the pointer to new memory
 */
char *_strdup(char *str)
{
	int x = 0;
	char *p;

	while (*(str + x))
	{
	x++;
	}
	if (*str == '\0')
		return (NULL);
	x = x + 1;
	p = malloc(sizeof(char) * x);
	if (p == NULL)
		return (NULL);
	for (x = 0; *(str + x); x++)
	{
	*(p + x) = *(str + x);
	}
	return (p);
}
