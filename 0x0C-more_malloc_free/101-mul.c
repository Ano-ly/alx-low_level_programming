#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int get_int(char c);
int get_start(char *str);
int get_end(char *str, int start);
int _strlen(char *str);
int _atoi(char *s);

/**
 * main - multiplies arguments
 * @argc: argument count
 * @argv: array of string arguments
 * Definition - multiplies arguments and return product
 * Return: Exit 98 if program fails, returns 0 if success
*/

int main(int argc, char *argv[])
{
	unsigned long int mult;
	unsigned long int a;
	unsigned long int b;
	int i;

	i = 0;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	while (argv[1][i] != '\0')
	{
		if (!((argv[1][i] >= 48) && (argv[1][i] <= 57)))
		{
			printf("Error\n");
			exit(98);
		}
		i++;
	}
	i = 0;

	while (argv[2][i] != '\0')
	{
		if (!((argv[2][i] >= 48) && (argv[2][i] <= 57)))
		{
			printf("Error\n");
			exit(98);
		}
		i++;
	}
	a = _atoi(argv[1]);
	b = _atoi(argv[2]);

	printf("a: %ld b: %ld", a, b);
	mult = a * b;
	printf("%ld\n", mult);
	return (0);
}

/**
 * get_int - converts argument from char to int
 * @c: character to be converted to int
 * Definition - uses if and else if to convert char to int
 * Return: converted character
*/

int get_int(char c)
{
	if (c == 48)
		return (0);
	else if (c == 49)
		return (1);
	else if (c == 50)
		return (2);
	else if (c == 51)
		return (3);
	else if (c == 52)
		return (4);
	else if (c == 53)
		return (5);
	else if (c == 54)
		return (6);
	else if (c == 55)
		return (7);
	else if (c == 56)
		return (8);
	else if (c == 57)
		return (9);
	else
		return (-1);
}

/**
 * get_start - Gets the index of the first instance of a number
 * @str: str whose first instance of a number is to be gotten
 * Definition- uses for loops and ascii values to get index required
 * Return: integer, index of first instance of number
*/

int get_start(char *str)
{
	int start;
	int i;
	int l;

	l = _strlen(str);
	start = 0;

	for (i = 0; i < l; i++)
	{
		if (str[i] >= 48 && str[i] <= 57)
		{
			return (start);
		}
		start++;
	}
	return (-1);
}

/**
 * get_end - Gets the index of the last digit of the first integer instance
 * @str: string to be iterated through
 * @start: index of the first digit of first integer instance in string
 * Description - uses while loop to get required index
 * Return: integer, index of last digit of first integer instance
*/

int get_end(char *str, int start)
{
	int i;

	i = start + 1;

	while (str[i] >= 48 && str[i] <= 57)
	{
		i++;
	}
return (i);
}

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 * Description - converts string to integer using powers of ten and for loops
 * Return: converted integer, 0, if no integer found in string
*/

int _atoi(char *s)
{
	if (get_start(s) != -1)
	{
		unsigned long int exp;
		unsigned long int number;
		unsigned long int _int;
		unsigned long int start;
		unsigned long int end;
		unsigned long int i;

		start = get_start(s);
		end = get_end(s, start);
		number = 0;
		exp = end - start - 1;

		for (i = start; i < end; i++)
		{
			_int = get_int(s[i]);

			if (_int == 0)
			{
				exp--;
				continue;
			}
			else
			{
				unsigned long int j;
				int mult;

				mult = 1;

				for (j = 0; j < exp; j++)
					mult *= 10;
				number += _int * mult;
				exp--;
			}
		}
		return (number);
	}
	else
		return (0);
}

/**
 * _strlen - computes the length of a string
 * @str: string whose length is to be computed
 * Description - computes length of string
 * Return: integer, length of string
*/

int _strlen(char *str)
{
	int i;
	int lenn;

	i = 0;
	lenn = 0;

	while (str[i] != 0)
	{
		lenn++;
		i++;
	}
	return (lenn);
}
