#include <stdio.h>
/**
 * main - print all combination of single digit number
 * Return: 0
 */
int main(void)
{
	int x;

	for (x = 48; x <= 57; x++)
	{
	putchar(x);
	putchar(',');
	putchar(' ');
	}
	putchar('\n');
	return (0);
}
