#include "dog.h"
/**
 * new_dog - create new dog
 * @name: name of new dog
 * @age age of new dog
 * @owner: owner of new dog
 * Return: new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;
	int i, nameLength = 0, ownerLength = 0;

	new = malloc(sizeof(*new));

	if (new == NULL || name == NULL || owner == NULL)
	{
		return (NULL);
	}

	while (name[nameLength] != '\0')
		nameLength++;

	while (owner[ownerLength] != '\0')
		ownerLength++;

	new->name = malloc(nameLength + 1);

	new->owner = malloc(ownerLength + 1);

	if (new->name == NULL || new->owner == NULL)
		return (NULL);

	for (i = 0; i < nameLength; i++)
		new->name[i] = name[i];

	new->name[i] = '\0';
	new->age = age;

	for (i = 0; i < ownerLength; i++)
		new->owner[i] = owner[i];

	new->owner[i] = '\0';

	return (new);
}
