#include "variadic_functions.h"

/**
 * print_numbers - print list of the numbers
 * @n: count
 * @separator: char
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list argum;
	unsigned int i;

	va_start(argum, n);

	for (i = 0; i < n ; i++)
	{
		printf("%d%s", va_arg(argum, int), separator - 1);
		if (separator == NULL)
			printf("%d", va_arg(argum, int));
	}
	printf("\n");
	va_end(argum);
}
