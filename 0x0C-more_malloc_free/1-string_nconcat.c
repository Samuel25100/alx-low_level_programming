#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: string number one
 * @s2: string two
 * @n: the number of byte of s2 to concat to s1
 * Return: the pointer to concat string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int len1 = 0, len2 = 0, tot, x;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
	{
	len1++;
	}
	while (s2[len2] != '\0')
	{
	len2++;
	}

	if (n < len2)
		tot = len1 + n;
	else
		tot = len1 + len2;

	p = malloc(sizeof(char) * tot + 1);
	if (p == NULL)
		return (NULL);

	for (x = 0; x < tot; x++)
	{
		if (x < len1)
		*(p + x) = *(s1 + x);
		else
		p[x] = *(s2 + (x - len1));
	}
	*(p + x) = '\0';
	return (p);
}
