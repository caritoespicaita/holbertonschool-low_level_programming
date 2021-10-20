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
	int i, d1, d2, sumd1 = 0, sumd2 = 0;

	for (i = 0; i < size; i++)
	{
		d1 = (size + 1) * i;
		d2 = (size - 1) * (i + 1);
		sumd1 = sumd1 + a[d1];
		sumd2 = sumd2 + a[d2];
	}


	printf("%d, %d\n", sumd1, sumd2);
}


