#include "dog.h"

void init_dog(struct dog *d, char *nam, float ag, char *owne)
{
	d->name = nam;
	d->age = ag;
	d->owner = owne;
}


