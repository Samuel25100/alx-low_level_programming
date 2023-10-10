#include <stdio.h>
/**
 * main - print the first 50 fibonacci numbers
 * Return: 0
 */
int main(void)
{
	int x, z, inc;
	unsigned int y;

	x = 1;
	z = 0;
	for (inc = 0; inc < 50; inc++)
	{
	y = x + z;
	z = x;
	x = y;
	printf("%d ,", y);
	}
	printf("\n");
	return (0);
}
