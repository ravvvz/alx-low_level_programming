#include "main.h"

/**
 * _strdup - duplicates a strings and returns the duplicate
 * @str: the string to duplicate
 *
 * Return: the pointer to the string
 */

char *_strdup(char *str)
{
	char *s;
	int size, i;

	if (str == NULL)
		return (NULL);

	size = 0;
	i = 0;
	while (str[size] != '\0')
		size++;

	s = malloc((sizeof(char) * size) + 1);
	if (s == NULL)
		return (NULL);

	while (i < size)
	{
		s[i] = str[i];
		i++;
	}

	s[i] = '\0';

	return (s);
}
