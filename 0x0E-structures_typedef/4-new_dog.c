#include "dog.h"
/**
 * _strlen - returns the length of a string
 * @s: String to count that pass to the function
 *
 * Return: length of string
 */

int _strlen(char *s)
{
	int c = 0;

	for (; *s != '\0'; s++)
	{
		c++;
	}

	return (c);
}
/**
  * _strcpy - Copy a string
  * @dest: Destination value
  * @src: Source value
  *
  * Return: the pointer to dest
  */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	dest[i++] = '\0';

	return (dest);
}

/**
 * new_dog - create new dog
 * @name: name of new dog
 * @age: age of new dog
 * @owner: owner of new dog
 * Return: new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;

	new = malloc(sizeof(dog_t));

	if (new == NULL || name == NULL || owner == NULL)
	{
		return (NULL);
	}

	new->name = malloc(sizeof(char) * (_strlen(name) + 1));

	if (new->name == NULL)
	{
		free(new);
		return (NULL);
	}

	new->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (new->owner == NULL)
	{
		free(new);
		free(new->name);
		return (NULL);
	}
	new->name = _strcpy(new->name, name);
	new->age = age;
	new->owner = _strcpy(new->owner, owner);

	return (new);
}
