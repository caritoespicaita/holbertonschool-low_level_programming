#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints its name, followed by a new line.
 * @argv: argument count
 * @argc: argument vector
 * Return: always 0.
 */
int main(int argc, char *argv[])
{
	int mul;

	if (argc == 3)
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mul);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
     
