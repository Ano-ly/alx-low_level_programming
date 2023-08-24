#include <stdio.h>


int is_sep(char c)
{
        int int_;
        int i;
        int issep;

        int arr[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

        int_ = (int)c;
        issep = 0;

        for (i = 0; i < 13; i++)
        {
                if (int_ == arr[i])
                {
                        issep = 1;
                        break;
                }
                printf("in for loop");
        }
        return (issep);
}

int main(void)
{
	printf("%d", is_sep('h'));
	return (0);
}
