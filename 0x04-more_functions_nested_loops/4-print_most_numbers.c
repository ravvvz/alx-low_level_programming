#include "main.h"

/**
 * print_most_numbers - prints most numbers except 2 and 4
 *
 * Return: void
 */
void print_most_numbers(void)
{
	int a = 48;

	while (a <= 57)
	{
		if (a == 2 || a == 4)
			continue;
		_putchar(a++);
	}

	_putchar('\n');
}
