#include <stdio.h>
#include <stdlib.h>

int comp(int cents, int n);

/**
 * main - computes cent change with minumum amount of coins possible considered
 * @argc: count of arguments
 * @argv: array of string arguments
 * Definition - used comp function to compute
 * Return: 1, or 0
*/

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (atoi(argv[1]) < 0)
	{
		printf("0\n");
	}
	if (argc == 2 && atoi(argv[1]) > 0)
	{
		printf("%d\n", comp(atoi(argv[1]), 0));
	}
	return (0);
}

/**
 * comp - computes the minimum amout of coins that make up the parameter cents,
 * from the possible coins 25, 20, 5,2, 1 cents
 * @cents: the amount of cents
 * @n: the minumum number
 * Definition - uses recursion :)
 * Return: n
*/

int comp(int cents, int n)
{
	if (cents == 0)
	{
		return (n);
	}
	if (cents == 1)
	{
		return (n + 1);
	}
	if ((cents / 25) >= 1)
	{
		return (comp(cents % 25, n + (cents / 25)));
	}
	if ((cents / 10) >= 1)
	{
		return (comp(cents % 10, n + (cents / 10)));
	}
	if ((cents / 5) >= 1)
	{
		return (comp(cents % 5, n + (cents / 5)));
	}
	if ((cents / 2) >= 1)
	{
		return (comp(cents % 2, n + (cents / 2)));
	}
	return (0);
}

