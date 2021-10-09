#include "main.h"
/**
 *print_number - Write a function prints an integer.
 *@n: integer
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n >= 10)
	{
		print_number((unsigned int)n / 10);
	}
	_putchar((n % 10) + '0');
}
