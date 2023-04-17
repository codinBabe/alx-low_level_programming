#ifndef DOG_H
#define DOG_H
#include <stdio.h>
#include <stdlib.h>
/**
 * struct dog - define structure for dog
 * @name: first member
 * @owner: second member
 * @age: age of dog
 *
 * Description: created a structure for dog with its name,age and owners name.
 */
struct dog
{
	char *name;
	char *owner;
	float age;
};
/**
 * dog_t - typedef for struct dog
 */
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif /* DOG_H */
