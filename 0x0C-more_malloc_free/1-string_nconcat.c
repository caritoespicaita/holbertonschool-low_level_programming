#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * char *string_nconcat - concatenates two strings.
 * @s1: pointer contains a string
 * @s2: pointer contains a string
 * @n: bytes
 * Return: Null if str null on failure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, l1 = 0, l2 = 0;
	char *conc;

	if (s1 == NULL || s2 == NULL)
		s1 = s2 = "";

	while (s1[l1] != '\0')
	{
		l1++;
	}
	while (s2[l2] != '\0')
	{
		l2++;
	}

	if (n > l2)
		l2 = n;

	conc = malloc((l2 + l1 + 1) * sizeof(char));

	if (conc == NULL)
		return (NULL);
	for (i = 0; i < l1; i++)
	{
		conc[i] = s1[i];
	}

	for (i = 0; i <= l2;  i++)
	{
		conc[i + l1] = s2[i];
	}
	conc[l1 + l2] = '\0';
	return (conc);
}
