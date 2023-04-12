#include "main.h"

/**
 * argstostr - receives argument from CLI and prints it
 * @ac: number of arguments passed to the program
 * @av: the string to the arg
 *
 * Return: char *
 */

char *argstostr(int ac, char **av)
{
	char *str;
	int i, k, j, len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			len++;
		}
		len++;
	}

	str = malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);

	for (i = 0, j = 0; i < ac || j < len; i++)
	{
		for (k = 0; av[i][k] != '\0'; k++)
		{
			str[j] = av[i][k];
			j++;
		}
		str[j] = '\n';
		j++;
	}

	return (str);
}
