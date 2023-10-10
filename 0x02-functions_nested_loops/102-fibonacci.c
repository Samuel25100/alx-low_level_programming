#include <stdio.h>
/**
 * main - print the first 50 fibonacci numbers
 * Return: 0
 */
int main(void)
{
	int inc;
	unsigned long y, x, z;

	x = 1;
	z = 0;
	for (inc = 0; inc < 50; inc++)
	{
	y = x + z;
	z = x;
	x = y;
	printf("%lu", y);
	if (inc != 49)
	{
	printf(", ");
	}
	}
	printf("\n");
	return (0);
}
