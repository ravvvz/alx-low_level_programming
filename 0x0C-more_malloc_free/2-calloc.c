#include "main.h"

void *_memset(int *s, int c, size_t n);
/**
 * _calloc - allocates memory for an arrary using malloc
 * @nmemb: number of bytes to allocate
 * @size: the datatype size to allocate
 *
 * Return: void *
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *alct;
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	alct = malloc(size * nmemb);
	if (alct == NULL)
		return (NULL);

	ptr = alct;
	memset((int *)ptr, 0, size * nmemb);

	return (alct);
}

/**
 * _memset - copies a constant byte into memory address
 * @s: the ptr to copy to
 * @c: the constant byte to fill in
 * @n: the number of bytes to fill it into
 *
 * Return: void
 */

void *_memset(int *s, int c, size_t n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		s[i] = c;
		i++;
	}

	return (s);
}
