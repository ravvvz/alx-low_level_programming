#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @c: the number passed in as argument
 *
 * Return: value of the last digit
 */
int print_last_digit(int c)
{
	int n = c;

	n = n % 10;
	if (n < 0)
		n = (-n);
	_putchar(n + '0');

	return (n);
}
