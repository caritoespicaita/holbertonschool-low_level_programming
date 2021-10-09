#include "main.h"
/**
 *print_triangle - Write a function print a triangle, followed by a new line.
 *@size: the size of the triangle
 */
void print_triangle(int size)
{
	int i, j, k;

	if (size > 0)
	{
		for (i = 0 ; i < size ; i++)
		{
			for (j = size - i ; j > 0 ; j--)
				putchar(' ')
					;
			for (k = 0 ; k < i ; k++)
				putchar(35)
					;
			putchar('\n');
		}
	}
	return 0;
}
