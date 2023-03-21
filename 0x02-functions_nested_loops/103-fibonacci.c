#include <stdio.h>

/**
 * main - sum of some fibonacci numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int a, b, c, sum;

	a = 1;
	b = 2;
	sum = 0;

	for (; a <= 4000000; )
	{
		if (a % 2 == 0)
		{
			sum += a;
		}
		c = a + b;
		a = b;
		b = c;
	}
	printf("%ld\n", sum);

	return (0);
}
