#include "main.h"


char *_strncopy(char *dest, char *src, unsigned int n);
/**
 * string_nconcat - concatenates two string together
 * @s1: the first string
 * @s2: the second string
 * @n: amount of bytes to copy
 *
 * Return: char *
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i;
	char *concat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i = 0;
	while (s2[i] != '\0')
		i++;

	if (n >= i)
		n = i;
	i = 0;

	while (s1[i] != '\0')
		i++;

	concat = malloc(sizeof(char) * (i + n + 1));
	if (concat == NULL)
		return (NULL);
	_strncopy(concat, s1, i);
	_strncopy(&concat[i], s2, n);
	concat[i + n] = '\0';

	return (concat);
}

/**
 * _strncopy - copies a particular amount of bytes to dest
 * @dest: the destination of string
 * @src: the source of the string
 * @n: the number of byte to copy
 *
 * Return: *dest (new string)
 */

char *_strncopy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
