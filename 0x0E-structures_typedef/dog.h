#ifndef DOG_H
#define DOG_H

#include <stdio.h>

/**
 * struct dog - A new struct with 3 members.
 *
 * @name: Pointer to name string.
 * @age: Float containing age.
 * @owner: Pointer to dog owner.
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif /* DOG_H */
