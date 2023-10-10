#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - print all natural number to 98 or from n
 * @n: num
 * Return: void
 */
void print_to_98(int n)
{
	if (n == 98)
	{
	printf("%d\n", n);
	}
	else if (n < 98)
	{
	for (; n <= 98; n++)
	{
	printf("%d", n);
		if (n != 98)
		{
		printf(" ,");
		}
	}
	putchar('\n');
	}
	else if (n > 98)
	{
	for (; n >= 98; n--)
	{
	printf("%d", n);
		if (n != 98)
		{
		printf(" ,");
		}
	}
	putchar('\n');
	}
}
