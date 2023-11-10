#include <stdio.h>

int main(void)
{
	char **p;

	char names[] = {"amarachi", "Franca", "Odelade"};

	p = names;

	printf("%p", names);
	printf("%s", **p);
	return (0);
}
