#include "main.h"

/**
 * _memset - fills n bytes of memory with a constant byte
 * @s: memory area
 * @b: bytes to print to memory area
 * @n: the number of bytes to print on
 *
 * Return: char * (character pointer to memory add to modified byte)
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}

	return (s);
}
