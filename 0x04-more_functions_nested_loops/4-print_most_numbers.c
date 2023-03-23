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
		if (!(a == 50 || a == 52))
		_putchar(a);

		a++;
	}

	_putchar('\n');
}
