#include <stdarg.h>
#include "variadic_functions.h"

/**
* sum_them_all- sum
* @n: count
* Return:sum, if n=0 return 0.
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list ls;
	unsigned int i, sum = 0;

	if (n == 0)
		return (0);

	va_start(ls, n);
	for (i = 0; i < n ; i++)
	{
		sum += va_arg(ls, int);
	}
	va_end(ls);
	return (sum);
}

