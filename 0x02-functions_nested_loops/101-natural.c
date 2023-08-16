#include <stdio.h>

/**
 * main - entry point
 * Definition - program starts here
 * Return: always 0
*/

int main(void)
{
	int sum = 0;
	int value = 0;
	int three;
	int five;

	while (value < 1024)
	{
		three = value % 3;
		five = value % 5;
		if ((three == 0) || (five == 0))
		{
			sum += value;
		}
		value += 1;
	}
	printf("%d\n", sum);
	return (0);
}
