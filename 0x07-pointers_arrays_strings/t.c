#include <stdio.h>

int main(void)
{
	int i;
	int j;

	i = 0;

	for (j = 0; j < 8; j++)
	{
		printf("%d", j);
		i++;
		if (i == 5)
		{
			break;
		}
	}
	printf("%d", j);
	return (0);
}
