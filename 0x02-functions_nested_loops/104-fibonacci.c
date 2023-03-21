#include <stdio.h>

/**
 * main - print the first 100 fibonacci numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long int a, b, c, d;

	a = 1, b = 2;

	for (d = 0; d < 100; d++)
	{
		printf("%lu", a);

		if (!(d == 100))
			printf(", ");

		c = a + b;
		a = b;
		b = c;
	}
	putchar('\n');

	return (0);
}
