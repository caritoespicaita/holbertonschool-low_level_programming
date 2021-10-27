#include <stdio.h>
#include <stdlib.h>

/**
 * char *create_array - creates an array of chars
 * @c: the char to returns
 * @size: the size of array to print
 *
 * Return: Null if size=0.
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	arr = malloc(size * sizeof(char));

	if (size == 0 || arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}

