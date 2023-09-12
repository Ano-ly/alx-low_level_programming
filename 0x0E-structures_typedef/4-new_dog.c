#include "dog.h"
#include <stdlib.h>

/**
 * _strdup - this function duplicates a string
 * @str: string to be duplicated
 * Definition - duplicates a string using memory allocation and for loops
 * Return: pointer to duplicate of string
*/

char *_strdup(char *str)
{
	char *p;
	int n;
	int i;

	n = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[n] != '\0')
	{
		n++;
	}
	p = malloc(sizeof(char) * (n + 1));
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < n; i++)
	{
		p[i] = str[i];
	}
	p[i] = '\0';
	return (p);
}

/**
 * new_dog - creates a new dog
 * @name: name of dog to be created
 * @age: age of dog
 * @owner: name of dog owner
 * Description - creates dog using malloc
 * Return: pointer to memory space allocated for new dog
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *bingo;

	bingo = malloc(sizeof(dog_t));
	if (bingo == NULL)
		return (NULL);

	bingo->name = _strdup(name);
	bingo->age = (age);
	bingo->owner = _strdup(owner);

	return (bingo);
}
