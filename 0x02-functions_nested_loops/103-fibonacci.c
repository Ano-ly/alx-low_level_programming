#include <stdio.h>

/**
 * main - entry point
 * Description - the program starts here
 * Return: always 0
*/

int main(void)
{
	int m = 1;
	int n = 2;
	int sum = 3;
	long int total = 2;

	while ((sum < 4000000) || (sum == 4000000))
	{
		if (sum % 2 == 0)
		{
			total += sum;
		}
		m = n;
		n = sum;
		sum = m + n;
	}
	printf("%ld\n", total);
	return (0);
}
