#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 *binary_search - is a pointer to the first element of the array to search in
 *@array: is a pointer to the first element of the array to search in
 *@size: is the number of elements in array
 *@value:  is the value to search for
 *Return: the index where value is located
 *		  if value is not present in array or if  is NULL
 *		  return -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left = 0, right = size - 1, i = 0;
	int half;

	if (!array || !size)
	{
		return (-1);
	}

	while (left <= right)
	{
		printf("Searching in array: ");

		for (i = left; i < right; i++)
		{
			printf("%d, ", array[i]);
		}
		printf("%d\n", array[right]);

		half = (right + left) / 2;

		if (array[half] == value)
			return (half);

		else if (array[half] > value)
			right = half - 1;

		else
			left = half + 1;
	}
	return (-1);
}
