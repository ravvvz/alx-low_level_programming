#include "main.h"

/**
 * _strncat - string that concatenates number of bytes of string
 * @dest: destination of the string
 * @src: the source of the string
 * @n: the number of bytes of the string
 *
 * Return: char * (char pointer of the string)
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
		i++;

	while (j < n)
	{
		dest[i] = src[j];
		j++;

		if (src[j] == '\0')
			break;
		i++;
	}

	return (dest);
}
