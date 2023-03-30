#include "main.h"

/**
 * cap_string - capitalizes all letters after punctuation mark
 * @s: the string
 *
 * Return: char * (string)
 */

char *cap_string(char *s)
{
	char str[11] = {',', ';', '.', '!', '?', '"', '(', ')', '{', '}', '\0'};
	int i = 0, j;

	while (s[i] != '\0')
	{
		j = 0;
		while (str[j] != '\0')
		{
			if (s[i] == str[j])
			{
				if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
					s[i + 1] -= 32;
			}
			j++;
		}
		i++;
	}

	return (s);
}
