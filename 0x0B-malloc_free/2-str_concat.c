#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * *str_concat - function that concatenates two strings
 * @s1: pointer contains a string
 * @s2: pointer contains a string
 * Return: Null if str null on failure
 */
char *str_concat(char *s1, char *s2)
{
	int i, l1 = 0, l2 = 0;
	char *conc;

	if (s1 == NULL)
		s1 = " ";

	if (s2 == NULL)
		l2 = " ";

	while (s1[l1] != '\0')
	{
		l1++;
	}
	while (s2[l2] != '\0')
	{
		l2++;
	}

	conc = malloc((l1 + l2) * sizeof(char) + 1);

	if (conc == NULL)
		return (NULL);
	for (i = 0; i < l1; i++)
	{
		conc[i] = s1[i];
	}

	for (i = 0; i < l2; i++)
	{
		conc[i + l1] = s2[i];
	}
	conc[l1 + l2] = '\0';
	return (conc);
	free(conc);
}

