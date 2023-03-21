#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet 10 times
 *
 * Return: Void
 */
void print_alphabet_x10(void)
{
	int i, u;

	for (i = 0; i < 10; i++)
	{
		for (u = 97; u <= 122; u++)
		{
			_putchar(u);
		}
		_putchar('\n');
	}
}
