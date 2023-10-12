#include <stdio.h>
/**
 * main - print form 1 - 100 but multiple of 3 "Fizz" 5x Buzz both FB
 * Return: 0
 */
int main(void)
{
	int x;

	for (x = 1; x <= 100; x++)
	{
	if (!(x % 5) && !(x % 3))
	{
	printf(" FizzBuzz");
	}
	else if (!(x % 5))
	{
	printf(" Buzz");
	}
	else if (!(x % 3))
	{
	printf(" Fizz");
	}
	else if (x == 1)
	{
	printf("%d", x);
	}
	else
	printf(" %d", x);
	}
	putchar('\n');
	return (0);
}
