#include <stdio.h>

/**
 * main - entry point
 * Definition - first 50 fibonacci numbers are printed
 * Return: always 0
*/

int main(void)
{
	long int m = 1;
	long int n = 2;
	int i;

	printf("%ld, %ld, ", m, n);

	for (i = 0; i < 48; i++)
	{
		long int sum = m + n;

		printf("%ld", sum);
		if (i != 47)
		{
			printf(", ");
		}
		m = n;
		n = sum;
	}
	printf("\n");
	return (0);
}
