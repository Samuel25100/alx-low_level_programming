#include "main.h"
/**
 * argstostr - concatenates all the arguments of your program
 * @ac: the number of argument
 * @av: the array of the argument
 * Return: pointer of char
 */
char *argstostr(int ac, char **av)
{
	char *p;
	int x, y, z = 0, w = 0;

	if (ac == 0 || av == 0)
		return (NULL);

	for (x = 0; x < ac; x++)
	{
	for (y = 0; av[x][y]; y++)
	{
	z++;
	}
	}
	z = z + ac;
	p = malloc((sizeof(char) * z) + 1);
	if (p == NULL)
	{
	return (NULL);
	}

	for (x = 0; x < ac; x++)
	{
	for (y = 0; av[x][y]; y++)
	{
	p[w] = av[x][y];
	w++;
	}
	if (p[w] == '\0')
	{
	p[w++] = '\n';
	}
	}
	return (p);
}
