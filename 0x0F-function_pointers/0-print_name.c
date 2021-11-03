#include "function_pointers.h"

/**
 * print_name - print name.
 * @name: name of a person.
 * @f: print name as is and UPPERCASE.
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		f(name);
}
