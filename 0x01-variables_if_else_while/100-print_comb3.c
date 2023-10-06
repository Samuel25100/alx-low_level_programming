#include <stdio.h>
/**
 * main - print all commbination of 2 digit numbers
 * Return: 0
 */
int main(void)
{
	int x, y;

	for (x = 48; x <= 56; x++)
	{
	for (y = 48; y <= 57; y++)
	{
	if(y > x)
	{
	putchar(x);
	putchar(y);
	if (x != 56)
	{
	putchar(',');
	putchar(' ');
	}
	}
	}
	}
	putchar('\n');
	return (0);
}
