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
if (var == 'f')
{
var -= 1;
}
else if (var == 'r')
{
putchar(var);
var -= 1;
}
}
putchar('\n');
return (0);
}
