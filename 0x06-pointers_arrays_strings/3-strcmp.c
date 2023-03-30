#include "main.h"

/**
 * _strcmp - compares two strings together
 * @s1: the first string
 * @s2: the second string
 *
 * Return: int (the diff between s1 and s2)
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0, j = 0;

	while (s1[i] != '\0')
	{
		if (s1[i] == s2[j])
		{
			while (s1[i + j] == s2[j])
			{
				j++;
				if (s2[j] == '\0')
					return (0);
			}
		}
		else
			return (s2[i] - s1[i]);
		i++;
	}

	return (0);
}
