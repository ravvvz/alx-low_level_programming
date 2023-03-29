#include "main.h"

/**
 * _strcat - contatenates two strings together
 * @dest: the destination of the string
 * @src: the source of the string
 *
 * Return: char * (char pointer to concatenated string)
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';

	return (dest);
}
