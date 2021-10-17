#include "main.h"

/**
 * puts2 - prints a string, followed by a new line
 *@str: pointer values string
 *Return: string
 */
void puts2(char *str)
{
	int i;
	int j = 0;

	while (str[j] != '\0')
	{
		j++;
	}

	for (i = 0; i < j; i += 2)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
