#include "main.h"

/**
 * _strlen_recursion - gets strlen of s via recursive algorithm.
 * @s: string check length
 * Return: length.
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	_putchar(1 + _strlen_recursion(s + 1));
}
