#include <stdio.h>

int main(int argc, char *argv[])
{
	int i;

	printf("No of arguments: %d\nArguments:", argc);
	for (i = 0; i < argc; i++)
	{
		printf("%s, ", argv[i]);
	}
	return (0);
}
