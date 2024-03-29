#include "variadic_functions.h"
/**
 * sum_them_all - returns the sum of all its parameters
 * @n: the number of parameter
 * Return: the result
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int x;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(ap, n);
	for (x = 0; x < n; x++)
		sum += va_arg(ap, int);
	va_end(ap);
	return (sum);
}
