#include <stdio.h>

/**
 * main - prints all the arguments of the main function, with a newline
 * in between them
 * @argc: the count of arguments
 * @argv: an array of string arguments
 * Description - prints each argument, followed by a newline, using a for loop
 * Return: 0
*/

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
