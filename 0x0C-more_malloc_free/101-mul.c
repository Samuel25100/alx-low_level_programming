#include <stdio.h>
#include <stdlib.h>
int _atoi(char *s);
int isNumber(char *s);
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
	printf("Error\n");
	exit(98);
	}
	if ((isNumber(argv[1])) || (isNumber(argv[2])))
	{
	printf("Error\n");
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
/**
 * isNumber - checks if a string is a number
 * @s: string to check
 * Return: 1 if number, 0 if not
 */
int isNumber(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
		if (s[i] < '0' || s[i] > '9')
			return (1);
	return (0);
}
