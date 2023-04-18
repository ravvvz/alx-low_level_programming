#include "dog.h"

/**
 * init_dog - initialize a variable of type struct_dog
 * @d: the pointer to the address of struct_dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Return: Nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = NULL;
	d->owner = NULL;

	if (d->name == NULL)
	{
		d->name = malloc(sizeof(name));
		if (d->name == NULL)
			return;
		strcpy(d->name, name);

	}

	if (d->owner == NULL)
	{
		d->owner = malloc(sizeof(owner));
		if (d->owner == NULL)
			return;
		strcpy(d->owner, owner);
	}

	d->age = age;
}
