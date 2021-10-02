#include <stdio.h>
/**
* main-print alphabet
* Return: 0
*/
int main(void)
{
int var;
int var1;
for (var= 'a'; var <= 'z'; var++)
putchar(var);
for (var1= 'A'; var1 <= 'Z'; var1++)
putchar(var1);
putchar('\n');
return (0);
}
