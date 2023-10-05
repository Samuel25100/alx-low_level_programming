#include <unistd.h>
/**
 * main - print the string
 * Return: 1
 */
int main(void)
{
char array[] = "and that piece of art is useful\"";
char array2[] = " - Dora Korpar, 2015-10-19\n";

	write(2, array, sizeof(array));
	write(2, array2, sizeof(array2));
	return (1);
}
