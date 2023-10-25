#include "main.h"
int chk_pali(char *s, int len, int index);
/**
 * is_palindrome - returns 1 if string is a palindrome and 0 if not
 * @s: the string pointer
 * Return: result
 */
int is_palindrome(char *s)
{
	int len;

	if (!(*s))
		return (1);
	len = _strlen_recursion(s);
	return (chk_pali(s, len, 0));
}
/**
 * _strlen_recursion - the lenght of string
 * @s: the string
 * Return: result
 */
int _strlen_recursion(char *s)
{
	int x = 0;

	if (*s)
	{
	x++;
	return (x + _strlen_recursion(s + 1));
	}
	return (0);
}
/**
 * chk_pali - check the string is palidrome
 * @len: the lenght of string
 * @s: the string
 * @index: the index num of s
 * Return: the result
 */
int chk_pali(char *s, int len, int index)
{
	if (s[index] == s[len / 2])
		return (1);
	if (s[index] == s[len - index - 1])
		return (chk_pali(s, len, index + 1));
	return (0);
}
