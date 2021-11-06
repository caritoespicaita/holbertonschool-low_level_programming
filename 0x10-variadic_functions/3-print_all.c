#include "variadic_functions.h"

/**
* print_all- print all type of dates
* @format: argument
*/
void print_all(const char * const format, ...)
{
char c;
int i = 0, inte;
float f;
char *s;
va_list(op);
va_start(op, format);
if (!format)
{
printf("\n");
return;
}
while (format[i])
{
switch (format[i])
{
case 'c':
c = va_arg(op, int);
printf("%c", c);
break;
case 'i':
inte = va_arg(op, int);
printf("%d", inte);
break;
case 'f':
f = va_arg(op, double);
printf("%f", f);
break;
case 's':
s = va_arg(op, char *);
s ? printf("%s", s) : printf("(nil)");
break;
default:
i++;
continue;
}
i++;
if (format[i] != '\0')
printf(", ");
}
printf("\n");
}
