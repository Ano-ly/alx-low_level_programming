#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies the two arguments and prints the result
 * @argc: the count of arguments
 * @argv: an array of string arguments
 * Description - mulitiplies each argument and prints the result
 * Return: 0
*/

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}


	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
