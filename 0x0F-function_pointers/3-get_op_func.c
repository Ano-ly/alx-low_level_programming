#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
#include <string.h>

/**
 * get_op_func - gets the right function that would be required to
 * compute and arithmetic operation
 * @s: operator
 * Description - gets the right function for an arithmetic operation
 * Return: pointer to required function
*/

int (*get_op_func(char *s))(int, int)
{
	int i;

	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	i = 0;

	while (i < 6)
	{
		if (strcmp((ops[i]).op, s) == 0)
		{
			return ((ops[i]).f);
		}
		i++;
	}
	return (NULL);
}
