#include "main.h"

/**
 * _puts_recursion-prints a string, followed by a new line.
 * @s: string print
 * Return: char.
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
		return;
	printf("%c", *s);
	_puts_recursion(s + 1);
}
