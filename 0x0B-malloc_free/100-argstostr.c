#include <stdlib.h>

/**
 * argstostr - concatenates the arguments of a program
 * @ac: is similar to argc. it is the count of the arguments
 * @av: is similar to argv. It is an array of string arguments
 * Definition - concatenates strings
 * Return: pointer to concatenated string; NULL if function fails
*/

int calc_formalloc(int ac, char **av);

char *argstostr(int ac, char **av)
{
	char *p_conc;
	int i;
	int j;
	int k;
	int for_malloc;

	for_malloc = calc_formalloc(ac, av);
	k = 0;

	if (for_malloc == 0)
	{
		return (NULL);
	}
	p_conc = malloc(sizeof(char) * for_malloc);

	if (p_conc == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			p_conc[k] = av[i][j];
			j++;
			k++;
		}
		p_conc[k] = '\n';
		k++;
	}
	p_conc[k] = '\0';

	return (p_conc);
}

/**
 * calc_formalloc - calculated the neccessary formalloc
 * @ac: the count of arguments
 * @av: the string to be concatenated
 * Definition - calculates required space for concatenated string
 * Return: NULL, if ac is 0, and the number required
*/

int calc_formalloc(int ac, char **av)
{
	int i;
	int j;
	int for_malloc;

	if (ac == 0 || av == NULL)
		return (0);
	for_malloc = 0;

	for (i = 0; i < ac; i++)
	{
		j = 0;

		while (av[i][j] != '\0')
		{
			for_malloc++;
			j++;
		}
		for_malloc++;
	}
	for_malloc++;

	return (for_malloc);
}
