#include "main.h"
/**
 * leet - encodes a string into 1337
 * @leet: string to encode
 *
 * Return: address of leet
 */
char *leet(char *let)
{
	int i, j;

	char letters[] = "aAeEoOtTlL";
	char numbers[] = "4433007711";

	for (i = 0; let[i]; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (let[i] == letters[j])
				let[i] = numbers[j];
		}
	}
	return (let);
}

