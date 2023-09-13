#include <stdlib.h>

/**
 * print_name - pritns a name, according to the specifications
 * of the function passed
 * @name: name to be printed
 * @f: the function to be used to print
 * Description - prints a name
 * Return: void
*/

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL)
		f(name);
}
