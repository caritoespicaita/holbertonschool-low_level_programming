#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - assign a random number to the variable n each time it is executed
 * 
 *  
 * Return: 0
 */
int main(void)
{
  int n;

  srand(time(0));
  n = rand() - RAND_MAX / 2;
  ltn = n % 10;

  if (ltn > 5)
    {
      printf("Last digit of %d is %d and is greater than 5\n");
    }
  else if (ltn == 0)
    {
      printf("Last digit of %d is %d and is 0\n");
    }
  else if (lastn < 6 && lastn != 0)
    {
      printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastn);
    }
  return (0);
}
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - assign a random number to the variable n each time it is executed
 * 
 *  
 * Return: 0
 */

int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
ltn = n % 10;

if (ltn > 5)
{
printf("Last digit of %d is %d and is greater than 5\n",n,ltn);
}
else if (ltn == 0)
{
printf("Last digit of %d is %d and is 0\n");
}
else if (lastn < 6 && lastn != 0)
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastn);
}
return (0);
}
