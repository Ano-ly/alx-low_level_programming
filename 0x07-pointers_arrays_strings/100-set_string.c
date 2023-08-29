#include "main.h"

/**
 * set_string - sets the value of a pointer to a char
 * @s: pointer to the pointer whose value is to change to the value of the
 * address of a char
 * @to: new pointer
 * Description - changes pointer values
*/

void set_string(char **s, char *to)
{
	*s = to;
}
