#include <unistd.h>

/**
 * main - entry point
 * Description - the program starts here
 * Return: always 0
*/

int main(void)
{
	char string[60] = "and that piece of art is useful\" - \
Dora Korpar, 2015-10-19\n";

	write(2, string, sizeof(string) - 1);
	return (1);
}
