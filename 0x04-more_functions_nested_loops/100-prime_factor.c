#include <stdio.h>

/**
 * main - prints greatest prime factor of 612852475143
 * Definition - greatest prime factor is outputted
 * Return: always 0
*/

int main(void)
{
	long int i;
	long int j;
	int is_prime;

	long int highest;

	long int integer = 612852475143;

	for (i = 3; i < integer; i++)
	{
		if (integer % i == 0)
		{
			for (j = 2; j * j < i; j++)
			{
				if (i % j == 0)
				{
					is_prime = 1;
					break;
				}
			}
			if (is_prime == 0)
			{
				highest = i;
			}
			is_prime = 0;
		}
		else
		{
			continue;
		}
	}
	printf("%ld", highest);
	return (0);

}
