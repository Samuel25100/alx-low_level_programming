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
	unsigned int len1, len2, tot, x;

	len1 = strlen(s1);
	len2 = strlen(s2);
	if (n < len2)
		tot = len1 + n + 1;
	else
		tot = len1 + len2 + 1;
	p = malloc(sizeof(char) * tot);
	if (p == NULL)
		return (NULL);
	for (x = 0; x < tot; x++)
	{
		if (x < len1)
		*(p + x) = *(s1 + x);
		else
		*(p + x) = *(s2 + (x - len1));
	}
	*(p + x) = '\0';
	return (p);
}
