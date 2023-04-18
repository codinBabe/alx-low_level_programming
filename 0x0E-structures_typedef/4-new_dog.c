#include "dog.h"
/**
 * new_dog - this function create a new dog
 * @name: name of dog
 * @age: dog age
 * @owner:dog owner
 * Return: pointer to a new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int a, b, i;
	dog_t *dog;

	if (name == NULL || owner == NULL)
		return (NULL);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	for (a = 0; name[a]; a++)
		;
	a++;
	dog->name = malloc(a * sizeof(char));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (i = 0; i < a; i++)
		dog->name[i] = name[i];
	dog->age = age;
	for (b = 0; owner[b]; b++)
		;
	b++;
	dog->owner = malloc(b * sizeof(char));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (i = 0; i < b; i++)
		dog->owner[i] = owner[i];
	return (dog);
}

