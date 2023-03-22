#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints from any value passed as argument to 98
 * @n: accepts an int argument
 *
 * Return: void
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		for (; n <= 98; n++)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(", ");
			}
		}
	}
	else if (n > 98)
	{
		for (; n >= 98; n--)
		{
			printf("%d", n);

			if (n != 98)
			{
				printf(", ");
			}
		}
	}
	else
		printf("%d", n);

	printf("\n");
}
