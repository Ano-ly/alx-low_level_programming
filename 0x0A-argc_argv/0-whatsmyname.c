#include <stdio.h>

/**
 * main - prints the name of a program
 * @argc: count of the arguments of the function
 * @argz: an array of strings
 * Description - this is a main function with arguments
 * Return: 0
*/

int main(int argc __attribute__((unused)), char *argz[])
{
	printf("%s\n", argz[0]);
	return (0);
}
