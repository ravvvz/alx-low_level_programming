#include "main.h"

/**
 * _strlen - calculates the length of a str
 * @s: the string passed through a pointer (datatype: char)
 *
 * Return: int (length of the str)
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;

	return (i);
}
