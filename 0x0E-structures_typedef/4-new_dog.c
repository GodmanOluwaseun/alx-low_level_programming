#include "dog.h"
#include <string.h>

/**
 * new_dog - Function that creates a new dog.
 * @name: Name of dog.
 * @age: Age.
 * @owner: Dog owner.
 * Return: struct type.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog;

	if (name == NULL || owner == NULL)
	return (NULL);

	newdog = malloc(sizeof(dog_t));

	if (newdog == NULL)
	{
		return (NULL);
	}

	newdog->name = strdup(name);

	if (newdog->name == NULL)
	{
		free(newdog);
		return (NULL);
	}

	newdog->age = age;
	newdog->owner = strdup(owner);

	if (newdog->owner == NULL)
	{
		free(newdog->name);
		free(newdog);
		return (NULL);
	}
	return (newdog);
}
