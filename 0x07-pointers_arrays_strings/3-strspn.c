#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: the string
 * @accept: the prefix string to check
 *
 * Return: unsigned int (length of prefix)
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j;

	i = 0;
	j = 0;
	while (accept[i] != '\0')
	{
		while (s[j] != '\0')
		{
			if (s[j] == accept[i])
				return (j + 1);
			j++;
		}
		break;
	}

	return (0);
}
