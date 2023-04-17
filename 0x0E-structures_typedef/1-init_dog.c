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
	d->name = name;
	d->age = age;
	d->owner = owner;
}
