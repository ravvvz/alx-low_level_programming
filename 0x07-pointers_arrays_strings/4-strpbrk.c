#include "main.h"

/**
 * _strpbrk - searches a string for any set of bytes
 * @s: the string
 * @accept: the string to check match
 *
 * Return: char *
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (accept[j] == s[i])
				return (s + i);

			j++;
		}
		i++;
	}

	return (NULL);
}
