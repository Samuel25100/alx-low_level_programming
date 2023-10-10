#include <stdio.h>
/**
 * main - print sum of all multiples of 3 and 5 below 1024
 * Return: 0
 */
int main(void)
{
	int x, y;

	for (x = 0; x < 1024; x++)
	{
	if (!(x % 3) || !(x % 5))
	{
	y = y + x;
	}
	}
	printf("%d\n", y);
	return (0);
}
