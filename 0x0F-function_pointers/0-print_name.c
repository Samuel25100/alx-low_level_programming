#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - prints a name
 * @name: the name to be print
 * @f: the function pointer
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
