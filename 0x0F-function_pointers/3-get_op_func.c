#include "3-calc.h"
#include <string.h>

/**
 * get_op_func - Select the correct function
 * @s: operator passed as argument to the program
 * Return: null if not match (+, -, *, /, %).
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}
	};
	int i;

	i = 0;
	while (ops[i].op != NULL)
	{
		if (strcmp(ops[i].op, s) == 0)
			return (ops[i].f);
		i++;
	}
	return (0);
}
