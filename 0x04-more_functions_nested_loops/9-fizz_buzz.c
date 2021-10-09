#include <stdio.h>
/**
 * main - Prints the numbers from 1-100, but for multiples of three,
 *        Fizz is printed instead of the number, for multiples of five,
 *        Buzz, and for multiples of both three and five, FizzBuzz.
 *Return: Always 0.
 */

int main(void)
{
	int i;

<<<<<<< HEAD
	for (i = 1; i <= 100; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
			printf("FizzBuzz");
		else if (i % 5 == 0)
			printf("Buzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else
			printf("%i", i);

		if (i < 100)
=======
	for (i = 1 ; i < 100 ; i++)
	{
		if ((i % 3) == 0)
		{
			printf("fizz");
		}
		else if ((i % 5) == 0)
		{
			printf("buzz");
		}
		else if ((i % 3) == 0 && (i % 5) == 0)
		{
			printf("fizzbuzz");
		}
		if (n < 100)
>>>>>>> 137787810a768094e9a30482fedd32ea07fbe654
			printf(" ");
		else
			printf("\n");
	}
	return (0);
}

