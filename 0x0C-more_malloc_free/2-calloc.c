#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * *str_concat - function that concatenates two strings
 * @s1: pointer contains a string
 * @s2: pointer contains a string
 * Return: Null if str null on failure
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
