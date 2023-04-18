#include "dog.h"

char *_strcpy(char *dest, char *src);
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
	{
		d->name = malloc(sizeof("(nil)"));
		if (d->name == NULL)
			return;
		_strcpy(d->name, "(nil)");
		printf("Name: %s\n", d->name);
	}
	else
		printf("Name: %s\n", d->name);

	printf("Age: %f\n", d->age);

	if (d->owner == NULL)
	{
		d->owner = malloc(sizeof("(nil)"));
		if (d->owner == NULL)
			return;
		_strcpy(d->owner, "(nil)");
		printf("Owner: %s\n", d->owner);
	}
	else
		printf("Owner: %s\n", d->owner);
}

/**
 * _strcpy - copies a string to dest
 * @dest: destination of string
 * @src: source of the string
 *
 * Return: char * (string pointer)
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
