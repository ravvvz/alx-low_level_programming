#include "main.h"

/**
 * rev_string - reverses a string
 * @s: the string to reverse
 *
 * Return: void
 */

void rev_string(char *s)
{
	int i = 0, j = 0;
	char str[1000];

	while (s[i] != '\0')
	{
		str[i] = s[i];
		i++;
	}

	str[i] = '\0';
	i--;
	while (i >= 0)
	{
		s[j] = str[i];
		j++;
		i--;
	}

	s[j] = '\0';
}
