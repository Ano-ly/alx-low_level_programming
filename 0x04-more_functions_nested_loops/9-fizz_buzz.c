#include <stdio.h>

/**
 * main - check that code
 *
 * main - check that code
 * Return: Always 0.
 */

int main(void)
{
	int i;

	for (i = 1; i < 101; i++)
	{
		/*This if block comes before the rest, because a number can be
		 * both a multiple of three, and a multiple of three and five.
		 * This is to ensure not only Fizz or Buzz gets printed, leaving
		 * the FizzBuzz part, due to the 'else' if statement.*/
		if ((i % 3) == 0 && (i % 5) == 0)
		{
			printf("FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", i);
		}
		if (i != 100)
		{
			printf(" ");
		}
	}
	printf("\n");
	return (0);

}
