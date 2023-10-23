#include "main.h"
/**
 * _strstr - finds the first occurrence of the substring needle in
 * the string haystack
 * @haystack: pointer to string
 * @needle: sub-string
 * Return: pointer to the beginning of the located substring, or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int x, y;

	for (x = 0; *(haystack + x); x++)
	{
	for (y = 0; (*(haystack + x) == *(needle + y)); y++)
	{
	if (*(haystack + x + 1) == *(needle + y + 1))
		return (haystack + x);
	}
	if (*needle == '\0')
	{
	return (haystack);
	}
	}
	return (0);
}
