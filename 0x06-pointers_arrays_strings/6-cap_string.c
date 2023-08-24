#include "main.h"

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

	while (str[i] != 0)
	{
		lenn++;
		i++;
	}
	return (lenn);
}

/**
 * is_sep - checks if argument is a 'separator'
 * @c: argument to be checked
 *
 * Description - uses for loop
 * Return: 0 is not separator, 1 if separator
*/

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
	}
	return (issep);
}

/**
 * cap_string - capitalises all words in a string, i.e, camel case
 * @str: string to be capitalised
 *
 * Description - uses while loop and if statements to capitalise string
 * Return: pointer to capitalised string
*/

char *cap_string(char *str)
{
	int i;
	int cap;
	int l;

	i = 0;
	cap = 0;
	l = _strlen(str);

	for (i = 0; i < l; i++)
	{
		if (is_sep(str[i]) || cap == 1)
		{
			if (is_sep(str[i]) && cap == 1)
			{
				cap = 0;
			}
			continue;
		}
		else
		{
			if (!(str[i] >= 65 && str[i] <= 90))
			{
				str[i] -= 32;
			}
			cap = 1;
		}
	}
	return (str);
}
