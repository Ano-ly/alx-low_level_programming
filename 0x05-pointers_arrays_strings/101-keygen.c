#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random passwords
 * Description - uses srand and time to generate random passwords
 * Return: 0
*/

int main(void)
{
	int j;

	srand(time(0));
	j = rand();
	printf("%d\n", j);

	return (0);
}
