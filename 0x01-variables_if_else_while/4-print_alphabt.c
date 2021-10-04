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
<<<<<<< HEAD
if (var == 'e' || var == 'q')
{
var -= 1;
}
else
{
putchar(var);
var -= 1;
}
=======
if (var != 'e' && var != 'q')
putchar(var);
>>>>>>> dbebcc291bb0163ad08d3d64ccf146695d33b967
}
putchar('\n');
return (0);
}
