#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int **p;


	p = malloc(8);
	**p = 4;

	printf("This is the integer in p: %d", **p);
	free(p);

	return(0);

}
