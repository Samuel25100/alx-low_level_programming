#include "main.h"
/**
 * set_string -  sets the value of a pointer "to" to the "s"
 * @s: pointer value will be set on
 * @to: value copied from
 * Return: void
 */
void set_string(char **s, char *to)
{
	*s = to;
}
