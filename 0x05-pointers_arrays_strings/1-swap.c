#include "main.h"

/**
 * swap_in -swaps the values of two integers
 * @a: pointer values integer
 * @b: pointer values integer
 */
void swap_int(int *a, int *b)
{
	int x;

	 x = *a;
	*a = *b;
	*b = x;
}
