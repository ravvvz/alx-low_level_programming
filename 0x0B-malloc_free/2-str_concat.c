#include "main.h"

/**
 * str_concat - concatenates two strings together
 * @s1: the first string
 * @s2: the second string
 *
 * Return: a pointer to string
 */

char *str_concat(char *s1, char *s2)
{
	char *str;
	int i, j = 0, v = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[j] != '\0')
		j++;
	while (s2[v] != '\0')
		v++;

	str = malloc((sizeof(char) * (v + j)) + 1);
	if (str == NULL)
		return (NULL);

	j = 0;
	v = 0;
	i = 0;
	while (s1[j] != '\0')
	{
		str[i] = s1[j];
		j++;
		i++;
	}
	while (s2[v] != '\0')
	{
		str[i] = s2[v];
		i++;
		v++;
	}

	str[i] = '\0';

	return (str);
}
