#include "main.h"

/**
* binary_to_uint - converts a binary number to an unsigned int.
* @b:pointing to a string of 0 and 1 chars.
* Return: the converted number, or 0 if.
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int number;

	if (b == NULL)
		return (0);
	for (number = 0; *b; b++)
	{
		if (*b == '1')
			number = (number << 1) | 1;
		else if (*b == '0')
			number <<= 1;
		if (*b != '0' && *b != '1')
			return (0);
	}
	return (number);
}
