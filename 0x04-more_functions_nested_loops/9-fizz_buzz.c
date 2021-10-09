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

	for (i = 1 ; i < 100 ; i++)
	{
		if ((i % 3) == 0)
		{
			printf("fizz ");
		}
		else if ((i % 5) == 0)
		{
			printf("buzz ");
		}
		else if ((i % 3) == 0 && (i % 5) == 0)
		{
			printf("fizzbuzz ");
		}
		else if (i != ((i % 3) == 0 && (i % 5) == 0))
		{
			printf("%d ", i);
		}
	}
	printf("\n");
	return (0);
}

