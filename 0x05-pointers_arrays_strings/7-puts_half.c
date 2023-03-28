#include "main.h"

/**
 * puts_half - prints a string half way
 * @str: the string to print halfway
 *
 * Return: void
 */

void puts_half(char *str)
{
	int i = 0, y;

	while (str[i] != '\0')
		i++;

	y = i;
	if (i % 2 != 0)
	{
		i = (i) / 2;
	}
	else
		i = i / 2;

	for (; i < y; i++)
		_putchar(str[i]);

	_putchar('\n');
}
