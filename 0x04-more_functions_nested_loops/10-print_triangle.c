#include "main.h"

/**
 * print_triangle - prints a triangle with "#"
 * @size: size of the triangle (datatype: int)
 *
 * Return: void
 */

void print_triangle(int size)
{
	int a, b, x;

	x = size;

	if (size <= 0)
		_putchar('\n');
	for (a = 1; a <= size; a++)
	{
		for (b = 1; b <= size; b++)
		{
			if (b >= x) /* conflicting condition */
			{
				_putchar('#');
			}
			else
				_putchar(' ');
		}
		x--;
		_putchar('\n');
	}
}
