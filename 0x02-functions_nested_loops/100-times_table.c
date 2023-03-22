#include "main.h"

/**
 * print_times_table - prints the time table up to the number passed to it
 * @n: number or int param passed to it
 * Return: void
 */
void print_times_table(int n)
{
	if (n <= 15 && n >= 0)
	{
		int a, b, c;

		c = 0;
		for (a = 0; a <= n; a++)
		{
			for (b = 0; b <= n; b++)
			{
				if ((b * c) < 10)
				{
					if (!(b == 0))
					{
						_putchar(',');
						_putchar(' ');
						_putchar(' ');
						_putchar(' ');
					}
					_putchar((b * c) + '0');
				}
				else if ((b * c) >= 10 && (b * c) < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(((b * c) / 10) + '0');
					_putchar(((b * c) % 10) + '0');
				}
				else if ((b * c) >= 100 && (b * c) < 1000)
				{
					_putchar(',');
					_putchar(' ');
					_putchar((((b * c) / 10) / 10) + '0');
					_putchar((((b * c) / 10) % 10) + '0');
					_putchar(((b * c) % 10) + '0');
				}
			}
			_putchar('\n');
			c++;
		}
	}
}
