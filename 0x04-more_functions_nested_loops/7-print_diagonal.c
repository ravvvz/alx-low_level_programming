#include "main.h"

/**
 * print_diagonal - prints a diagonal
 * @n: int datatype param
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int a, b;

	if (n <= 0)
		_putchar('\n');
	for (a = 0; a < n; a++)
	{
		for (b = 0; b <= a; b++)
		{
			if (b == a)
			{
				_putchar('\\');
				break;
			}
			else
				_putchar(' ');
		}
		_putchar('\n');
	}
}
