#include <stdio.h>
#include "main.h"


int _strlen(char *str);

int main(void)
{

	char me[] = "amarachi\0\0\0\0\0\0";

	printf("%d", _strlen(me));
	return (0);

}

/**
 * _strlen - computes the length of a string
 * @str: string whose length is to be computed
 * Description - computes length of string
 * Return: integer, length of string
*/

int _strlen(char *str)
{
        int i;
        int lenn;

        i = 0;
        lenn = 0;

        while (str[i] != '\0')
        {
                lenn++;
                i++;
        }
        return (lenn);
}
