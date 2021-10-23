#include "main.h"
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
<<<<<<< HEAD
	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
=======
	if (argc == 3)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
>>>>>>> 2ec12b3d76ded889652af04b18778c204476c683
	}
	else
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	}
<<<<<<< HEAD
			return (0);
}
     
=======
	return (0);
}   
>>>>>>> 2ec12b3d76ded889652af04b18778c204476c683
