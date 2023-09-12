#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initialises a dog structure
 * @d: pointer that points to structure to be initialised
 * @nam: desired name
 * @ag: age of dog
 * @owne: name of owner of dog
 * Description - initialises new struct variable
 * Return: void
*/

void init_dog(struct dog *d, char *nam, float ag, char *owne)
{
	if (d != NULL)
	{
		d->name = nam;
		d->age = ag;
		d->owner = owne;
	}
}


