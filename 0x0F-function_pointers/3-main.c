#include "3-calc.h"
/**
 * main - accept the argc and argv to do opperation
 * @argv: the array of argument
 * @argc: the number of argument
 * Return: result
 */
int main(int argc, char *argv[])
{
	int x, y;
	char *z;

	if (argc != 4)
	{
	printf("Error\n");
	exit(98);
	}
	z = argv[2];
	x = atoi(argv[1]);
	y = atoi(argv[3]);
	if (get_op_func(op) == NULL || z[1] != '\0')
	{
	printf("Error\n");
	exit(99);
	}
	printf("%d\n", get_op_func(z)(x, y));
	return (0);
}
