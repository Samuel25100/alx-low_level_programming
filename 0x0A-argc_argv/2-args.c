#include <stdio.h>
/**
 * main - prints all arguments it receives in new line
 * @argc: num of argument
 * @argv: the array of each argument
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	int x;

	for (x = 0; x < argc; x++)
	{
	printf("%s\n", argv[x]);
	}
	return (0);
}
