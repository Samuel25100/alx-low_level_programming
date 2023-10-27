#include <stdio.h>
/**
 * main -  prints the number of arguments passed into it
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	int x, y = 0;

	if (argc > 0)
	{
		for (x = 0; argv[x]; x++)
		{
		y++;
		}
		y = y - 1;
	putchar(y + '0');
	}
	else
		putchar('0');
	putchar('\n');
	return (0);
}
