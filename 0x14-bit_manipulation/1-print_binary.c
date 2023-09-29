#include "main.h"
#include <unistd.h>
/*#include <stdio.h>*/

/**
 * print_binary - prints the binary representation of an
 * unsigned long integer
 * @n: number whose binary representation is to be printed
 * Definition - used bit operations to print the binary representation
 * of a number
 * Return: void
*/

void print_binary(unsigned long int n)
{
	unsigned long int store;
	int count;

	store = n;
	count = 0;

	if (store == 0)
		_putchar('0');
	else if (store == 1)
		_putchar('1');
	else
	{
		while (store > 1)
		{
			store = store >> 1;
			/*printf("%lu", store);*/
			count++;
			/*printf("first while loop problem");*/
		}
		while (count >= 0)
		{
			if ((n & (1 << count)) == 0)
				_putchar('0');
			else
				_putchar('1');
			count--;
			/*printf("Second while loop problem");*/
		}
	}
}

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
