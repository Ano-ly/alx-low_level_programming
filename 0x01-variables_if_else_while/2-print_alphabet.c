#include <stdio.h>

/**
 * main -entry point
 * Description - program starts here
 * Return: Always 0
*/

int main(void)
{
	int c;

	for (c = 97; c < 123; c++)
	{
		char ch = (char)c;

		printf("%c", ch);
	}
	printf("\n");
	return (0);

}

