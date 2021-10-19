#include "main.h"
#include <stdio.h>

/**
 * _strchr - locates a character in a string
 * @s: the memory area
 * @c: constant byte
 *
 * Return: a pointer when the character is found
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}
<<<<<<< HEAD
=======
	if (c != '\0')
		return (s + i);
>>>>>>> ae289c2bcd29947400192035b56906066ba7ce91
	return ('\0');
}
