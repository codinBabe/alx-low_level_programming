#include "dog.h"
/**
 * init_dog - This function create struct dog
 * @d: pointer to struct dog
 * @name: name of dog
 * @age:age of dog
 * @owner: owner of dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
