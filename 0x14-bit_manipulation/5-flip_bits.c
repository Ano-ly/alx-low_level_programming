#include "main.h"
#include <stdio.h>

/**
 * flip_bits - computes how many bits of an unsigned long need
 * to be flipped to match that of the other
 * @n: first unsigned long
 * @m: second unsigned long
 * Definition - computes how many bits need to be flipped to
 * make two numbers equal
 * Return: number of flip cycles required
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int a;
	int b;
	int index;
	unsigned int count;

	index = 63;
	count = 0;

	while (index >= 0)
	{
		a = get_bit(n, index);
		b = get_bit(m, index);
		printf("\n");
		/*printf("a; %d\n", a);*/
		/*printf("b; %d\n", b);*/
		if (a != b)
			count++;
		/*printf ("count %d\n", count);*/
		/*printf ("index %d\n", index);*/
		index--;
	}

	return (count);

}

/**
 * get_bit - gets the value of a bit at a particular index
 * @n: pointer to integer
 * @index: required index
 * Definition - gets the value of a bit
 * Return: value of the bit, -1 if error occurred
*/

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 64)
		return (-1);
	printf("bit :%lu|", (n & (1 << index)) >> index);
	return ((n & (1 << index)) >> index);
}
