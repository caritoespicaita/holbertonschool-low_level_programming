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
	unsigned int i, j, tl = 0, l1 = 0, l2 = 0;
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

	if (n >= l2 + 1)
	{
		tl = l1 + l2;
	}
	else
	{
		tl = l1 + n;
	}

	conc = malloc((tl + 1) * sizeof(char));

	if (conc == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
	{
		conc[i] = s1[i];
	}

	for (j = 0; i <= tl; j++, i++)
	{
		conc[i] = s2[j];
	}
	conc[tl] = '\0';
	return (conc);
}
