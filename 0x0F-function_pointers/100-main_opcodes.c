#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints its own opcodes
 * @argc: argument count
 * @argv: array of string arguments
 * Definition - prints its own opcodes
 * Return: 0
*/

int main(int argc __attribute__((unused)), char *argv[])
{
	char *bytes;
	int digs;
	int i;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	if (atoi(argv[1]) < 1)
	{
		printf("Error\n");
		exit(2);
	}
	if (atoi(argv[1]) <= 28)
	{
	bytes = "554889e54883ec30897ddc488975d0837ddc027419488d05830e0000\n";
	digs = atoi(argv[1]) * 2;

	for (i = 0; i < digs; i++)
	{
		printf("%c", bytes[i]);
		if (i % 2 == 1)
		{
			printf(" ");
		}
	}
	printf("\n");
	}

	return (0);
}
