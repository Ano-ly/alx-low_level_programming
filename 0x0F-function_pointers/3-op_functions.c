#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - adds two numbers
 * @a: first number
 * @b: second number
 * Definition - adds two numbers together
 * Return: sum of two numbers
*/

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - computes the difference between numbers
 * @a: first number
 * @b: second number
 * Description - computes the difference betwee two numbers
 * Return: difference between the two numbers
*/

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - finds the product of two numbers
 * @a: first number
 * @b: second number
 * Description - computes the product of two numbers
 * Return: the product
*/

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - finds the quotient of two numbers
 * @a: first number
 * @b: second number
 * Description - computes the quotient of two numbers
 * Return: quotient
*/

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - finds the modulo division of two numbers
 * @a: first number
 * @b: second number
 * Description - computes the modulo division of two numbers
 * Return: modulo quotient
*/

int op_mod(int a, int b)
{
	return (a % b);
}
