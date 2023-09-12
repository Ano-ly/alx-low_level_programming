#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * print_dog - prints the values of a variable of type struct dog
 * @d: pointer to the struct dog variable to be printed
 * Description - prints struct variable using a certain format
 * Return: void
*/

void print_dog(struct dog *d)
{
	char *n;
	float a;
	char *o;

	n = d->name;
	a = d->age;
	o = d->owner;

	if (d != NULL)
	{
		if (n == NULL)
			printf("Name: (nil)\n");
		if (n != NULL)
			printf("Name: %s\n", n);
		printf("Age: %f\n", a);
		if (o == NULL)
			printf("Owner: (nil)\n");
		if (o != NULL)
			printf("Owner: %s", o);
	}
}
