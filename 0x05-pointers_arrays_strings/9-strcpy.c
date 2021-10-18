#include "main.h"

/**
 * _strcpy -  a function that copies the string.
 * @dest : character value
 * @src  : character value
 *
 *Return: return the pointer to desk.
 */
char *_strcpy(char *dest, char *src)
{

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (dest);
}
