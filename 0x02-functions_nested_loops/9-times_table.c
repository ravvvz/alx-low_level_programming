#include "main.h"

/**
 * times_table - prints the time table form 0 to 9
 *
 * Return: void
 */
void times_table(void)
{
	int a, b, c;

	a = 0;

	for (b = 0; b < 10; b++)
	{
		for (c = 0; c <= 9; c++)
		{
			if ((c * a) < 10)
			{
				if (((c * a) == 0) && c == 0)
				{
					_putchar((c * a) + '0');
				}
				else
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((c * a) + '0');
				}
			}
			else if (((c * a) >= 10) && ((c * a) < 100))
			{
				_putchar(',');
				_putchar(' ');
				_putchar(((c * a) / 10) + '0');
				_putchar(((c * a) % 10) + '0');
			}
		}
		_putchar('\n');
		a++;
	}
}
