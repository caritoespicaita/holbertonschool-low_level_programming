#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers..
 * @argv: argument count
 * @argc: argument vector
 * Return: If the program does not receive two arguments return 1 .
 */
int main(int argc, char *argv[])
{
	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	}
	return (0);
}
