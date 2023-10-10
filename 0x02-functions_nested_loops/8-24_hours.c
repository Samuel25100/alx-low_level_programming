#include "main.h"
#include <stdlib.h>
/**
 * jack_bauer - print every min from 00:00 to 23:59
 * Return: void
 */
void jack_bauer(void)
{
	int z, w;

	for (z = 0; z <= 23; z++)
	{
	for (w = 0; w <= 59; w++)
	{
	_putchar((z / 10) + '0');
	_putchar((z % 10) + '0');
	_putchar(':');
	_putchar((w / 10)+ '0');
	_putchar((w % 10) + '0');
	_putchar('\n');
	}
	}
}
