#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the name of the file a piece of code was compiled from
 * Definition - uses a pre-defined macro
 * Return: 0
*/

int main(void)
{
	printf("%s\n", __FILE__);

	return (0);
}
