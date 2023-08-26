#include <stdio.h>
#include "main.h"

int main(void)
{
	int count;

	char me[] = "amarachi\0";
	count = 0;

	if (me[8] || me[8] == 0)
	{
		printf("impossibe");
	}
	else
	{
		printf("never");
	}
	while (1 == 1)
	{
		if (me[count] == 0 && me[count + 1] == 0)
		{
			printf("%d", count);
		}
		else if (!(me[count] != 0 || me[count + 1]))
			break;
		count++;
	}
	printf("%d", count);

	return (0);
}
