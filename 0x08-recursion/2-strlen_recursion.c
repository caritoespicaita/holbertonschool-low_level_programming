#include "main.h"

/**
 * _strlen_recursion - gets strlen of s via recursive algorithm.
 * @s: string check length
 * Return: length.
 */

void _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
