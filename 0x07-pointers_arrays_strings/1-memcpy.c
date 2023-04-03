#include "main.h"

/**
 * _memcpy - copies n byte from memory area src to memory area dest
 * @dest: copy destination
 * @src: copy source
 * @n: number of bytes to copy
 *
 * Return: char * (modified address of memory to string)
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
