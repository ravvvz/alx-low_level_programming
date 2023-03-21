#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @c: the number passed in as argument
 *
 * Return: value of the last digit
 */
int print_last_digit(int c)
{
	if (c < 0)
		c = (-c);
	c = c % 10;
	_putchar(c + '0');

	return (c);
}
