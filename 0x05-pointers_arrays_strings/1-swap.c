#include "main.h"

/**
 * reset_to_98 -updates the value it points to to 98
 * @a: pointer values integer
 * @b: pointer values integer
 */
void swap_int(int *a, int *b)
{
	int x;

	x=*a;
	*a=*b;
	*b=x;
}

