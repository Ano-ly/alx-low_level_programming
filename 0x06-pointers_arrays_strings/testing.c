#include <stdio.h>
#include "main.h"

void first_byte(int currline);


/**
 * first_byte - prints zeroes and hex position of first byte
 * @currline: the number of the current line
 * Description - uses for and while loop to print zeroes, etc
 * Return: void
*/

void first_byte(int currline)
{
	int dec_digit;
	int hex_power;
	int hex_sq;
	int i;

	dec_digit = 10 * currline;
	hex_sq = 1;
	hex_power = 0;

	while (dec_digit >= hex_sq)
	{
		hex_sq *= 16;
		hex_power++;
	}
	for (i = 0; i < 8 - hex_power; i++)
	{
		printf("0");
	}
	printf("%x", dec_digit);
	printf(":");
	printf(" ");
}
