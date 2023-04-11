#include "main.h"

/**
 * create_array - create an array of size and input a char
 * @size: the size of the array
 * @c: the character to be in the array
 *
 * Return: Char *
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	if (size == 0)
		return (NULL);

	str = malloc((sizeof(char) * size) + 1);
	if (str == NULL)
		return (NULL);

	i = 0;
	while (i < size)
	{
		str[i] = c;
		i++;
	}

	str[i] = '\0';

	return (str);
}
