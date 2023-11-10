#include "variadic_functions.h"
/**
 * print_all - prints anything
 * @format: is a list of types of arguments passed to the function
 * Return: void
 */
void print_all(const char * const format, ...)
{
	char *str, *s = "";
	int x = 0;
	va_list ap;

	va_start(ap, format);
	if (format)
	{
	while (format[x])
		{
		switch (format[x])
		{
		case 'c':
			printf("%s%c", s, va_arg(ap, int));
			break;
		case 'i':
			printf("%s%d", s, va_arg(ap, int));
			break;
		case 'f':
			printf("%s%f", s, va_arg(ap, double));
			break;
		case 's':
			str = va_arg(ap, char*);
			if (str == NULL)
				printf("(nil)");
			printf("%s%s", s, str);
			break;
		default:
			x++;
			continue;
		}
		s = ", ";
		x++;
		}
	}
	printf("\n");
	va_end(ap);
}
