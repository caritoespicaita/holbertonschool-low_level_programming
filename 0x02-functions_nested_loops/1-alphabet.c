#include "main.h"
/**
* main-prints the alphabet, in lowercase, followed by a new line
*
* Return: Always 0.
*/
void print_alphabet(void)
{
char letr;
for (letr = 'a'; letr <= 'z'; letr++)
_putchar(letr);
_putchar('\n');
}
