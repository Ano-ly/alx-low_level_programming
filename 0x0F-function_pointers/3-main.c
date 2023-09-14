#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
#include <string.h>

/**
 * main - prints the result of an arithmetic operation
 * @argc: string argument count
 * @argv: array of strings
 * Description - computes the result of an arithmetic operation using
 * other functions
 * Return: 0
*/

int main(int argc, char *argv[])
{
	int (*p)(int, int);
	int a;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (!(strcmp(argv[2], "+") == 0 || strcmp(argv[2], "-") == 0 ||
		strcmp(argv[2], "/") == 0 || strcmp(argv[2], "%") == 0 ||
		strcmp(argv[2], "*") == 0))
	{
		printf("Error\n");
		exit(99);
	}
	if (((strcmp(argv[2], "/") == 0 || strcmp(argv[2], "%") == 0) &&
		(atoi(argv[3]) == 0)))
	{
		printf("Error\n");
		exit(100);
	}
	p = get_op_func(argv[2]);
	/*if (p != NULL)*/

	a = (*p)(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", a);


	return (0);
}

