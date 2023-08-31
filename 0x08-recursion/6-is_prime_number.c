#include "main.h"

int _isprime(int n, int num);

/**
 * is_prime_number - uses another function to check if its argument is a prime
 * number
 * @n: the number to be checked
 * Definition - supplies the starting recursion variable to the function it
 * uses
 * Return: 1 if prime, 0 if not
*/

int is_prime_number(int n)
{
	return (_isprime(n, 2));
}

/**
 * _isprime - uses recursion to check if a number is prime
 * @n: the number to be checked
 * @num: the recursion factor variable
 * Definition - uses recursion and repeated division by consecutive numbers to
 * determine if first argument is a prime number or not
 * Return: 0 is not prime, 1 if prime
*/

int _isprime(int n, int num)
{
	if (n <= 1)
	{
		return (0);
	}
	if (n == 2)
	{
		return (1);
	}
	if ((n % num == 0) && (n != num))
	{
		return (0);
	}
	if (num == n)
	{
		return (1);
	}
	else
	{
		return (_isprime(n, num + 1));
	}
}
