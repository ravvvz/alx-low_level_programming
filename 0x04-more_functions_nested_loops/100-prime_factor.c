#include <stdio.h>
#include <math.h>

/**
 * main - find the largest prime factor of a number
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	unsigned long int prime_number;
	unsigned long int number = 612852475143, i;

	for (i = 1; i < number / 2; i++)
	{
		if (number % i == 0)
		{
			number = number / i;
			prime_number = i;
			i = 1;

			if (number == 0)
				break;
		}
	}

	printf("%lu\n", prime_number);

	return (0);
}
