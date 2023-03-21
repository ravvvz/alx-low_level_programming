#include <stdio.h>

/**
 * main - prints Fibonacci numbers starting with 1 and 2
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long int a, b, c, d;

	a = 1, b = 2;
	for (d = 0; d <= 49; d++)
	{
		printf("%ld", a);

		if (!(d == 49))
			printf(", ");

		c = a + b;
		a = b;
		b = c;
	}
	putchar('\n');

	return (0);
}
