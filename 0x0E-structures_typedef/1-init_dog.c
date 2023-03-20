#include "dog.h"

/**
 * init_dog -intializes the struct dog
 * @d: structure dog
 * @name: dog name
 * @age: age
 * @owner: dog owner
 *
 * Return: nothing but to create the struct.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->owner = owner;
		d->age = age;
	}
}	
