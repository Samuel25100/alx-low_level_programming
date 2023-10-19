#include "main.h"
/**
 * string_toupper -  changes all lowercase letters to uppercase
 * @str: the string
 * Return: pointer to char
 */
char *string_toupper(char *str)
{
	int x;

	for (x = 0; *(str + x); x++)
	{
	if (*(str + x) <= 122 && *(str + x) >= 97)
		{
		*(str + x) = *(str + x) - 32;
		}
	}
	return (str);
}
