#include "main.h"

/**
 * _puts - prints a string a char at a time
 * @str: the string to print
 *
 * Return: void
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
