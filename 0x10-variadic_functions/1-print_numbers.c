#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_numbers - prints strings, followed by a new line
 * @separator:  is the string to be printed between the strings
 * @n: the number of string
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int x;

	va_start(ap, n);
	for (x = 0; x < n; x++)
	{
	printf("%d", va_arg(ap, int));

	if (x != (n - 1) && separator != NULL)
		printf("%s", separator);
	}
	va_end(ap);
	putchar('\n');
}
