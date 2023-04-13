#include "main.h"

/**
 * malloc_checked - allocates memory usng malloc
 * @b: the size of the memory to allocate
 *
 * Return: void pointer
 */

void *malloc_checked(unsigned int b)
{
	void *alct;

	alct = malloc(b);
	if (alct == NULL)
		exit(98);

	return (alct);
}
