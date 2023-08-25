#include <stdio.h>

void change_var(int *var);

int main(void)
{
	int a;
	int *b;
	int *c;

	int abc[] = {12, 13, 15};
	a = 47;
	b = &a;
	c = *(abc + 2);

	printf("Value of a: %d", a);
	printf("Value of b: '%p'", b);
	change_var(c);
	printf("New value of a: %d", a);

	return (0);
}

void change_var(int *(var + 2))
{
	*var = 20;
}
