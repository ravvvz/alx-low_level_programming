#include "main.h"

char *_strncpy(char *dest, char *src, unsigned int n);
/**
 * _realloc - reallocates a memory block
 * @ptr: pointer to memory block
 * @old_size: old size of memory block
 * @new_size: new size of memory block
 *
 * Return: void pointer
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_mem;

	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		if (ptr == NULL)
			return (NULL);

		return (ptr);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size == old_size)
		return (ptr);

	if (new_size > old_size || old_size > new_size)
	{
		new_mem = malloc(new_size);
		if (new_mem == NULL)
			return (NULL);
		if (new_size > old_size)
			_strncpy(new_mem, ptr, old_size);
		else
			_strncpy(new_mem, ptr, new_size);
		free(ptr);
	}

	return (new_mem);
}

/**
 * _strncpy - copies a string from *src to a *dest
 * @dest: the destination of the string
 * @src: the source of the string
 * @n: number of bytes to copy
 *
 * Return: char *
 */

char *_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
