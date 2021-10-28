#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup -  returns a pointer to a newly allocated space in memory
 * @str: pointer contains a string to duplicate
 *
 * Return: Null if str null and null if insufficient memory was aviable.
 */
char *_strdup(char *str)
{
	int i, len = 0;
	char *dup;

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
	{
		len++;
	}

	dup = malloc((len * sizeof(int)) + 1);

	if (dup == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		dup[i] = str[i];
	}
	return (dup);
	free(dup);
}

