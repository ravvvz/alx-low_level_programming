#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to make change for an amount
 * @argc: the number of argument passed
 * @argv: the array of pointer
 *
 * Return: amount of cents to give back
 */

int main(int argc, char **argv)
{
	int cents = 0, value;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		int coins[5] = {25, 10, 5, 2, 1}, i;

		value = atoi(argv[1]);

		if (value <= 0)
		{
			printf("%d\n", cents);
			return (0);
		}

		for (i = 0; i < 5 && value > 0; i++)
		{
			while (value >= coins[i])
			{
				value -= coins[i];
				cents++;
			}
		}
		printf("%d\n", cents);
	}

	return (0);
}
