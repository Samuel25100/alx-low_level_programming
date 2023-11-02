#include <stdio.h>
#include <stdlib.h>
int _atoi(char *s);
/**
 * main - multiply two argument
 * @argv: the array of the argument
 * @argc: the number of the argument
 * Return: result of the multiplication
 */
int main(int argc, char *argv[])
{
	double x, y;
	if (argc < 2)
	{
	printf("Error");
	exit(98);
	}
	x = _atoi(argv[1]);
	y = _atoi(argv[2]);
	printf("%f", x * y);
	return (0);
}
/**
 * _atoi - change char value to int
 * @s: the string
 * Return: the int
 */
int _atoi(char *s)
{
	int x, sign = 1;
	unsigned int y = 0;

	for (x = 0; *(s + x); x++)
	{
		if (*(s + x) == '-')
		{
		sign = sign * -1;
		}
		if (*(s + x) >= 48 && *(s + x) <= 57)
		{
		y = (y * 10) + (*(s + x) - '0');
		if (!((*(s + x + 1) >= 48) && (*(s + x + 1) <= 57)))
		{
			break;
			}
		}
	}
	y = y * sign;
	return (y);
}
