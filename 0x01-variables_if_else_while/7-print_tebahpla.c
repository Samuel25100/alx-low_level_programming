#include <stdio.h>
/**
 * main - print alphabet in lowercase in reverse
 * Return: 0
 */
int main(void)
{
	int x;

	for (x = 122; x <= 97; x--)
	{
	putchar(x);
	}
	putchar('\n');
	return (0);
}
