#include <stdio.h>

/**
 * main - prints a combo of values
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int v, y;

	for (v = 0; v <= 99; v++)
	{
		for (y = 0; y <= 99; y++)
		{
			if (y > v)
			{
				putchar((v / 10) + '0');
				putchar((v % 10) + '0');
				putchar(' ');
				putchar((y / 10) + '0');
				putchar((y % 10) + '0');
				if (!(v == 98 && y == 99))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	return (0);
}
