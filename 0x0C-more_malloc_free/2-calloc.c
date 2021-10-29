#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * *_calloc -  allocates memory for an array, using malloc
 * @nmemb: integer
 * @size: integer
 * Return: return pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *point;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	point = malloc(size * nmemb);
	if (point == NULL)
		return (NULL);

	for (i = 0; i < size * nmemb; i++)
	{
		point[i] = 0;
	}
	return (point);
}
