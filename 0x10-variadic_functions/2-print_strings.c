#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_strings -  prints strings, followed by a new line
 * @separator: separator string
 * @n: the number of string argument
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int x;
	char *str;
	va_list ap;

	va_start(ap, n);

	for (x = 0; x < n; x++)
	{
	str = va_arg(ap, char*);
	if (str == NULL)
	{
	printf("(nil)");
	}
	else
	{
	printf("%s", str);
	}

	if (x != (n - 1) && separator != NULL)
		printf("%s", separator);
	}

	va_end(ap);
	putchar('\n');
}
