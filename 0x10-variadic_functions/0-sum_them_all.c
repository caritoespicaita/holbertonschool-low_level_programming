#include <stdarg.h>
#include "variadic_functions.h"

/**
* print_numbers - print list of the numbers
* @n: count
* Return:sum, if n=0 return 0.
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list ls;
	unsigned int i, sum;
	if (n == 0)
		return (0);

	va_start(ls, n);
	sum = 0;
	for (i = 0; i < n ; i++)
	{
		sum += va_arg(ls, int);
	}
	va_end(ls);
	return (sum);
}

