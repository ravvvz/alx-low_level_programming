#include "main.h"

/**
 * _strchr - locates the first occurrence of a char in string
 * @s: the string
 * @c: the byte to locate
 *
 * Return: char * (pointer to location of first chr located
 */

char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (s + i);
		i++;
	}

	return (NULL);
}
