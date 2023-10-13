#include "main.h"
/**
 * print_number - print the number n
 * @n: the number
 * Return: void
 */
void print_number(int n)
{
	if (n < 0)
	{
	putchar('-');
	}
	if (n / 10)
	{
	print_number(n / 10);
	}
	putchar((n % 10) + '0');
}
