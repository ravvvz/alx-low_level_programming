#include "dog.h"

/**
 * print_dog - print info on the dog
 * @d: the dog pointer info
 *
 * Return: void
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		d->name = "(nil)";
	if (d->owner == NULL)
		d->owner = "(nil)";

	printf("Name: %s\nAge: %.7f\nOwner: %s\n", d->name, d->age, d->owner);
}
