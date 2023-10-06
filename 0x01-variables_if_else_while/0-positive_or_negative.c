#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - compare the last digit of n and give output
 * Return: 0
 */
int main(void)
{
	int n;
	
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n == 0)
	{
	printf("%d is zero", n);
	}
	else if (n < 0)
	{
	printf("%d is negative", n);
	}
	else if (n > 0)
	{
	printf("%d is positive", n);
	}
	return (0);
}

