#include <stdio.h>

/**
 * main - prints all natural numbers
 *
 * Return: int
 */
int main(void)
{
	int sum = 0, n;

	for (n = 0; n < 1024; n++)
	{
		if ((n % 3 == 0) || (n % 5 == 0))
		{
			sum += n;
		}
	}

	printf("%d\n", sum);

	return (0);
}
