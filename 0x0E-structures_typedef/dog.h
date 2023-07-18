#ifndef DOG_H
#define DOG_H
#include <stdio.h>
#include <stdlib.h>
/**
 * struct dog - This is a dog struct
 * @name:dog name
 * @age:dog age
 * @owner:owner details
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
