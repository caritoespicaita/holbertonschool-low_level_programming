#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds positive numbers..
 * @argv: argument count
 * @argc: argument vector
 * Return: 1 number contains symbols that are not digits.
 */
int main(int argc, char *argv[])
{
	int i,  sum = 0;

	if (argc <= 2)
	{
		printf("%d\n", 0);
		return (1);
	}

	for (i = 1; i < argc; i++)

	{
		int x;

		x = atoi(argv[i]);
		if (x >= 'a')
		{
			printf("%d""Error\n", x);
			return (1);
		}
		sum = sum + atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
