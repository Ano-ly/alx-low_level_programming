#include "dog.h"
#include <stdlib.h>

dog_t *new_dog(char *name, float age, char *owner)
{
	char *bingo;

	bingo = malloc(sizeof(dog_t));

	bingo->name = name;
	bingo->age = age;
	bingo->owner = owner;

	return (bingo);
}
