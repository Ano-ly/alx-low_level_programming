#include "main.h"
#include <stdio.h>



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

/**
 * second_byte - prints zeroes and hex position of first byte
 * @str: string whose bytes are to be printed in hex
 * @currline: the number of the current line
 * @size: the length of buffer
 * Description - uses for loop to print bytes in hex
 * Return: void
*/

void second_byte(char *str, int currline, int size)
{
	int cursor;
	int num;
	int i;
	int count;

	cursor = 10 * currline;
	count = cursor;


	for (i = cursor; i < cursor + 10; i++)
	{
		if (count == size)
		{
			break;
		}
		num = (int)str[i];

		if (num < 16)
			printf("0");
		printf("%x", num);
		if (i % 2 == 1)
			printf(" ");
		count++;
	}
}

/**
 * third_byte - prints 10 bytes of char
 * @str: string whose bytes are to be printed
 * @currline: the number of the current line
 * @size: length of buffer
 * Description - uses for loop to print bytes
 * Return: void
*/

void third_byte(char *str, int currline, int size)
{
	int cursor;
	int num;
	int i;
	int count;


	cursor = 10 * currline;
	count = cursor;


	for (i = cursor; i < cursor + 10; i++)
	{
		if (count == size)
		{
			break;
		}
		num = (int)str[i];

		if (num < 16)
			printf("me");
		if (i % 2 == 1)
		count++;
	}
}

/**
 * print_buffer - prints a buffer based on a given format
 * @b: buffer to be printed
 * @size: size of buffer
 * Description - prints buffer using various functions
 * Return: void
*/

void print_buffer(char *b, int size)
{
	int currline;
	int numline;

	numline = 0;

	if (size % 10 > 0)
	{
		numline += (size / 10) + 1;
	}
	else
	{
		numline += size / 10;
	}
	for (currline = 0; currline < numline; currline++)
	{
		first_byte(currline);
		second_byte(b, currline, size);
		printf("\n");
	}

}
