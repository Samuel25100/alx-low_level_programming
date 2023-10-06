#include <stdio.h>
/**
 * main - print alphabet in lowercase
 * Return: 0
 */
int main(void)
{
	int x;

	for (x = 97; x <= 122; x++)
	{
	if (x != 101 && x != 103)
	{
	putchar(x);
	}
	}
	putchar('\n');
	return (0);
}
