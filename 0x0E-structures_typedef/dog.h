#ifndef DOG_H
#define DOG_H

#include <stdio.h>

/**
 * struct dog - new type to create a dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Description: To create a dog attribute
 */
struct dog
{
	char *name;
	char *owner;
	float age;
};

#endif /* DOG_H */
