#include "dog.h"
#include <stdlib.h>

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

	bingo->name = name;
	bingo->age = age;
	bingo->owner = owner;

	return (bingo);
}
