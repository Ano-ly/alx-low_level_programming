#include <stdio.h>

/**
 * main - entry point
 * Description - program starts here
 * Return: always 0
*/

int main(void)
{
	long int li = 3;
	long long int lli = 4;
	char a = 65;

	int csize = sizeof(a);
	int isize = sizeof(3);
	int lisize = sizeof(li);
	int llisize = sizeof(lli);
	int fsize = sizeof(3.33f);

	printf("Size of a char: %d byte(s)\n", csize);
	printf("Size of an int: %d byte(s)\n", isize);
	printf("Size of a long int: %d byte(s)\n", lisize);
	printf("Size of a long long int: %d byte(s)\n", llisize);
	printf("Size of a float: %d byte(s)\n", fsize);

	return (0);
}
