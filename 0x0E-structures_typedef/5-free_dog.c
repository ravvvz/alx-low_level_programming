#include "dog.h"

/**
 * free_dog - frees a dog (malloced)
 * @d: the dog properties
 *
 * Return: Nothing.
 */

void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
