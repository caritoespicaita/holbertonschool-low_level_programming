#include <stdio.h>
/**
 * main-print alphabet
 * Return: 0
 */
int main(void)
{
int var;
for (var = 'a'; var <= 'z'; var++)
{
if (var != 'e' && var != 'q')
putchar(var);
}
putchar('\n');
return (0);
}
