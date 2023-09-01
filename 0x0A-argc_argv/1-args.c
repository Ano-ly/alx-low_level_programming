#include <stdio.h>

/**
 * main - prints the number of arguments
 * @argc: count of arguments
 * @argv: array of string arguments
 * Description - prints number of program arguments, excluding the program name
 * Return: 0
*/

int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d", argc - 1);
	return (0);
}
