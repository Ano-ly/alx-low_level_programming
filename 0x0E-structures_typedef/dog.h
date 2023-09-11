#ifndef DOG_H
#define DOG_H


/**
* struct dog - a new struct
* @name: name of dog
* @age: age of dog, float
* @owner: name of owner of dog
*
* Description - characteristics for a new dog
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *nam, float ag, char *owne);
void print_dog(struct dog *d);

dog_t *new_dog(char *name, float age, char *owner);

typedef struct dog dog_t;

#endif
