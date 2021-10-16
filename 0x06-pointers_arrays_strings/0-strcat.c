#include <stdio.h>
/**
 * _strcat - concat 2 string
 * @dest:char
 * @src:char
 * Return: pointer dest
 */

char *_strcat(char *dest, char *src)
{
	char *d = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (d);
}
