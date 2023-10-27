#include <stdio.h>
/**
 * main - print the first argument or name of program
 * @argc: the num of argument
 * @argv: array of each argument
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	if (argc >= 0)
		printf("%s\n", argv[0]);
	return (0);
}
