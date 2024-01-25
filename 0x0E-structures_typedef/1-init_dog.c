#include "main.h"

/**
 * init_dog - Functioin that initialize a variable of type struct dog.
 *
 * @d: Pointer to struct of type dog.
 * @name: Name of dog.
 * @age: Float containing age.
 * @owner: Pointer to owner name.
 * Return: void.
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
