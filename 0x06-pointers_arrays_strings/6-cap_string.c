#include "main.h"
/**
 * cap_string - capitalizes all words of a string
 * @str: the string
 * Return: the pointer to str
 */
char *cap_string(char *str)
{
	int x;

	for (x = 0; *(str + x); x++)
	{
	if (*(str + x) == ' ' 
	|| *(str + x) == '\t' 
	|| *(str + x) == ',' 
	|| *(str + x) == ';' 
	|| *(str + x) == '.' 
	|| *(str + x) == '!' 
	|| *(str + x) == '?' 
	|| *(str + x) == '"' 
	|| *(str + x) == '(' 
	|| *(str + x) == ')' 
	|| *(str + x) == '{' 
	||*(str + x) == '}' 
	|| *(str + x) == '\n')
		{
		if (*(str + x + 1) <= 122 && *(str + x + 1) >= 97)
		{
		*(str + x + 1) = *(str + x + 1) - 32;
		}
		}
	if (*(str + x) == '\t')
	{
	*(str + x) = ' ';
	}
	}
	return (str);
}
