#include <stdio.h>
/**
 * main - print number from 0 - 9 and from a - f
 * Return: 0
 */
int main(void)
{
	int x;

	for (x = 48; x <= 57; x++)
	{
	putchar(x);
	}
	for (x = 97; x <= 102; x++)
	{
	putchar(x);
	}
	putchar('\n');
	return (0);
}
