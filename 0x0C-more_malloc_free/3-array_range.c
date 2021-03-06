#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * *array_range - creates an array of integers.
 * @min: integer
 * @max: integer
 * Return: pointer
*/
int *array_range(int min, int max)
{
	int *point;
	int size, i;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	point = malloc(sizeof(*point) * size);
	if (point == NULL)
		return (NULL);
	for (i = 0; i < size; i++, min++)
	{
		point[i] = min;
	}
	return (point);
}
