#include "main.h"

/**
 * print_alphabet - prints the alphabet
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	int n = 97;

	while (n <= 122)
		_putchar(n++);

	_putchar('\n');
}
