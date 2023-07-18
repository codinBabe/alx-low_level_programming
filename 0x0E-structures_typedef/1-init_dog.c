#include "dog.h"
/**
 * init_dog - This function initialize a variable of type struct dog
 * @d:pointer to struct
 * @dog:the struct name
 * @name: the dog name
 * @age: the dog age
 * @owner: the dog owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
