#include "main.h"
/**
 * main - print _putchar
 * Return: 0 success
 */
int main(void)
{
	char st[] = "_putchar";
	int x;

	for(x = 0; st[x] != "\0"; x++)
	{
	_putchar(st[x]);
	}
	return (0);
}
