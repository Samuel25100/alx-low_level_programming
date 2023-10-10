#include <stdio.h>
/**
 * main - print even fibonacci numbers the didnot exceed 4-mil
 * Return: 0
 */
int main(void)
{
	int inc;
	unsigned long y, x, z, sum = 0;

	x = 1;
	z = 0;
	for (inc = 0; inc < 33; inc++)
	{
	y = x + z;
	z = x;
	x = y;
	if ((y % 2) == 0)
	{
	sum = sum + y;
	}
	}
	printf("%lu\n", sum);
	return (0);
}
