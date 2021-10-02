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
if (var == 'e')
{
var += 1;
}
else if (var == 'q')
{
putchar(var);
var += 1;
}
}
putchar('\n');
return (0);
}
