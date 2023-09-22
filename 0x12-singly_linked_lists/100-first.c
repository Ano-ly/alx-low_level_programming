#include "lists.h"
#include <stdio.h>

__attribute__((constructor)) void print_before_main(void);

/**
 * print_before_main - prints a statement before executing the main function
 * Definition - prints a statement
 * Return: void
*/

void print_before_main(void)

{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
