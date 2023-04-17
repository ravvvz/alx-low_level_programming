#include "dog.h"

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

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->name = _strdup(name);
	dog->age = age;
	dog->owner = _strdup(owner);

	return (dog);
}

/**
 * _strdup - copies a string
 * @s: the string
 *
 * Return: returns a copy of the string
 */

char *_strdup(char *s)
{
	char *copy;
	int i;

	i = 0;
	while (s[i] != '\0')
		i++;

	copy = malloc(sizeof(char) * i);
	if (copy == NULL)
		return (NULL);

	i = 0;
	while (s[i] != '\0')
	{
		copy[i] = s[i];
		i++;
	}

	return (copy);

}
