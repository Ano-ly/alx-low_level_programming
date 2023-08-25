#include "main.h"
#include <stdio.h>
#include <gmp.h>
#include <string.h>

/**
 * infinite_add - adds two numbers together and displays result
 * @n1: first number
 * @n2: second number
 * @r: buffer where sum is to be stored
 * @size_r: size of buffer
 *
 * Description - makes us of the GMP standard library
 * Return: 0 if size_r insufficient, pointer to result if sufficient
*/

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int l;
	char *p;

	mpz_t num1;
	mpz_t num2;
	mpz_t sum;

	mpz_init(num1);
	mpz_init(num2);
	mpz_init(sum);

	mpz_set_str(num1, n1, 10);
	mpz_set_str(num2, n2, 10);

	mpz_add(sum, num1, num2);

	p = mpz_get_str(NULL, 10, sum);
	l = strlen(p);

	if (l <= size_r)
	{
		r = p;
	}
	else
	{
		return (0);
	}
	return (r);
}


