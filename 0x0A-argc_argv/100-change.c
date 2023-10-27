#include <stdio.h>
int _atoi(char *s);
/**
 * main - print result of change for cent
 * @argc: the number of argument
 * @argv: the array of each argument
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	int x, y, result = 0;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc < 2)
	{
	printf("Error\n");
	return (1);
	}
	y = _atoi(argv[1]);
	if (y < 0)
	{
	printf("0\n");
	return (0);
	}
	for (x = 0; x < 5 && y >= 0; x++)
	{
	for (; y >= coins[x]; y -= coins[x])
	{
	result++;
	}
	}
	printf("%d\n", result);
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
