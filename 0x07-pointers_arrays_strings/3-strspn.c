#include "main.h"

/**
 * _strspn- gets the length of a prefix substring
 *@s: initial pointer
 *@accept: pointer to check
 *
 * Return: bytes of s which consist from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				break;

		}
		if (s[i] != accept[j])
			break;
	}
	return (i);
}


