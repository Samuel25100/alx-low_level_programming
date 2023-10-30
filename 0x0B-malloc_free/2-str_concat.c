#include "main.h"
/**
 * str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: pointer to the concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	int x = 0, y = 0, z;
	char *p;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (*(s1 + x))
	{
	x++;
	}
	while (*(s2 + y))
	{
	y++;
	}
	p = malloc(sizeof(char) * (x + y + 1));
	if (p == NULL)
	{
	return (NULL);
	}
	for (z = 0; z <= (x + y); z++)
	{
	if (z < x)
		*(p + z) = *(s1 + z);
	if (z >= x)
		*(p + z) = *(s2 + (z - x));
	}
	*(p + z) = '\0';
	return (p);
}
