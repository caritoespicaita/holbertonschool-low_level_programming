#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - the sum of the two diagonals
 * @a: pointer contains sum
 * @size: length of matrix
 * Return: Always 0.
 */
void print_diagsums(int *a, int size)
{
	int i, sumd1 = 0, sumd2 = 0;

	for (i = 0; i < (size * size);)
	{
		sumd1 = sumd1 + a[i];
		i = i + (size + 1);
	}
	for (i = 0; i < ((size * size) - 1);)
	{
		sumd2 = sumd2 + a[i];
		i = i + (size - 1);
	}

	printf("%d, %d\n", sumd1, sumd2);
}
