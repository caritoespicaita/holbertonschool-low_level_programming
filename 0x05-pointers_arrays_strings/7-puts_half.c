#include "main.h"

/**
 *puts_half- prints the second half of a string
 *@str: pointer values string
 *Return: void
 */
void puts_half(char *str)
{
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		continue;
	}
	if (i % 2 == 0)
	{
		for (j = i / 2; j < i; j++)
			_putchar(str[j]);
	}
	else
	{
		for (j = (i - 1) / 2; j < i; j++)
			_putchar(str[j]);
	}
	_putchar('\n');
}
