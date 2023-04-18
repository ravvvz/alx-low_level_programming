#include "dog.h"

char *_strcpy(char *dest, char *src);
/**
 * new_dog - creates a new dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Return: dog_t
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	if (name == NULL)
	{
		name = malloc(sizeof("(nil)"));
		if (name == NULL)
			return (NULL);
		_strcpy(name, "(nil)");
	}
	if (owner == NULL)
	{
		owner = malloc(sizeof("(nil)"));
		if (owner == NULL)
			return (NULL);
		_strcpy(owner, "(nil)");
	}

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(name));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	_strcpy(dog->name, name);

	dog->owner = malloc(sizeof(owner));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	_strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}

/**
 * _strcpy - copies a string to another
 * @dest: the destination of the string
 * @src: the source of the string
 *
 * Return: char *(pointer to the string)
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
