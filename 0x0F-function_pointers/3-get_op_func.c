#include "3-calc.h"
/**
 * get_op_func - function pointer to select the right operation
 * @s: the operation char
 * Return: pointer to the function
 */
int (*get_op_func(char *s))(int a, int b)
{
	int x = 0;

	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL},
		};
	while (ops[x].op)
	{
		if (*(ops[x].op) == *s)
			break;
		x++;
	}
	return (ops[x].f);
}
