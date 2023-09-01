#include <string.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * main - adds number arguments
 * @argc: argument count
 * @argv: array of string arguments
 * Description - uses for loops...
 * Return: 0, or 1
*/

int main(int argc, char *argv[])
{
	int i;
	unsigned long int j;
	int sum;

	sum = 0;
	sum += 1;
	sum -= 1;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; j < strlen(argv[i]); j++)
		{
			if (!(argv[i][j] >= 48 && argv[i][j] <= 57))
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	if (argc == 1)
	{
		printf("0\n");
	}
	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
		return (0);
	}
	return (0);
}
