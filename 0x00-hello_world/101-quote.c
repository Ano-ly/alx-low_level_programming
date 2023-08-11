#include <unistd.h>

/**
 * main - entry point
 * Description - the program starts here
 * Return: always 0
*/

int main(void)
{
	char string[100] = "and that piece of art is useful\" - \
Dora Korpar, 2015-10-19";

	write(2, string, sizeof(string) - 1);
	return (1);
}
