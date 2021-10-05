#include "main.h"

/**
 * print_alphabet_x10- Prints 10 times the alphabet, in lowercase.
 */
void print_alphabet_x10(void)
{
int i;
char letr;
for (i = 0; i < 10; i++)
{
for (letr = 'a'; letr <= 'z'; letr++)
_putchar(letr);
_putchar('\n');
}
}
