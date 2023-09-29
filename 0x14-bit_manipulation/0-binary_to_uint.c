#include "main.h"
#include <stdlib.h>
/*#include <stdio.h>*/

/**
 * binary_to_uint - converts a string of 0 and 1 chars to an
 * unsigned int
 * @b: pointer to binary string
 * Definition - converts a binary string to an unsigned decimal number
 * Return: 0, if b is NULL, or invalid, converted number, otherwise
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int converted;
	int index;
	int len;

	if (b == NULL)
		return (0);

	len = _strlen(b);
	index = find_valid_index(b, 0, len);
	/*printf("Index: %d\n", index);*/

	if (index == -1)
		return (0);
	converted = convert_bin(b, len - index - 1, index, 0);

	return (converted);
}

/**
 * convert_bin - this is a recursive function that converts
 * a binary number string into a decimal number
 * @str: binary string to be converted
 * @pow: power 2 is to be raised to in conversion;
 * is initially equal to the length of the string minus 1
 * @index: initial index of string element to be started from
 * increases by one for every traversal of the recursive function.
 * @sum: converted number to be returned
 *
 * Definition - the function uses recursion to convert from binary to decimal
 * Return: 0 if invalid string passed, converted number if not
*/

unsigned int convert_bin(const char *str, int pow, int index, unsigned int sum)
{
	/*printf("Pow: %d", pow);*/
	if (pow == -1)
		return (sum);
	if (!(str[index] == '0' || str[index] == '1'))
		return (0);
	if (str[index] == '1')
	{
		sum += find_pow(pow, 2);
		/*printf("Sum: %u\n", sum);*/
	}

	return (convert_bin(str, pow - 1, index + 1, sum));
}

/**
 * _strlen - computes the length of a string
 * @str: string whose length is to be computed
 * Description - computes length of string
 * Return: integer, length of string
*/

int _strlen(const char *str)
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

/**
 * find_valid_index - finds the first instance of the char '1' in
 * string to be converted
 * @str: string to be searched in
 * @index: starting point is 0; value returned.
 * @len: length of the string
 * Description - handles cases like '00000101'
 * Return: -1 if char other than '1' and '0' is found, index if successful
*/

int find_valid_index(const char *str, int index, int len)
{
	if ((index == len - 1) && (str[index] == '0'))
		return (index);
	if (str[index] == '0')
		return (find_valid_index(str, index + 1, len));
	if (str[index] == '1')
		return (index);
	else
		return (-1);
}

/**
 * find_pow - finds the result of a number raised to a power
 * @pow: power to be raised to
 * @base: base involved
 * Definition - custom power function
 * Return: result
*/

unsigned int find_pow(unsigned int pow, unsigned int base)
{
	unsigned int result;
	unsigned int i;

	result = 1;
	for (i = 0; i < pow; i++)
	{
		result *= base;
	}
	return (result);
}
