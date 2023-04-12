#include "main.h"

int _strlen(char *s);
int _isspace(int c);
char *_strncpy(char *dest, char *src, int n);
/**
 * strtow - splits a string into words
 * @str: the string to split
 *
 * Return: char **(array of pointer to string)
 */

char **strtow(char *str)
{
	char **word;
	int i, len, start, u;

	len = 0;
	if (str == NULL || _strlen(str) == 0)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
		if ((!_isspace(str[i]) && _isspace(str[i - 1]) && i != 0)
			|| (i == 0 && !_isspace(str[i])))
			len++;
	}
	if (len == 0)
		return (NULL);

	word = malloc(sizeof(char *) * (len + 1));

	for (i = 0, u = 0; str[i] != '\0' && u < len; i++)
	{
		if ((!_isspace(str[i]) && _isspace(str[i - 1]) && i != 0)
				|| (i == 0 && !_isspace(str[i])))
		{
			start = i;
			while (!_isspace(str[start++]))
				;

			word[u] = malloc(sizeof(char) * ((start - i) + 1));
			if (word[u] == NULL)
				return (NULL);

			_strncpy(word[u], &str[i], start - i);
			word[u][start - i] = '\0';
			u++;
		}
	}
	word[u] = NULL;
	return (word);
}

/**
 * _strncpy - copies an amount of byte from src to dest
 * @dest: where to cpy the string to
 * @src: where to copy the string from
 * @n: number of bytes to copy
 *
 * Return: voi
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
		dest[i] = '\n';

	return (dest);
}

/**
 * _isspace - checks if value is space or not
 * @c: value entered
 *
 * Return: 1 if space, 0 if otherwise
 */

int _isspace(int c)
{
	if (c == 32)
		return (1);
	return (0);
}

/**
 * _strlen - checks the length of the string
 * @s: the string
 *
 * Return: length of the string
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}
