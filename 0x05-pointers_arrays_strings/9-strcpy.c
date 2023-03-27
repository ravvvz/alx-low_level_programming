#include "main.h"

/**
 * _strcpy - copies a string to another pointer
 * @dest: the destination of the string
 * @src: the source of the string
 *
 * Return: char * (string)
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
