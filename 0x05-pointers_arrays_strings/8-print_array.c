#include "main.h"

/**
 * print_array - print an array of int
 * @a: the pointer to array of int
 * @n: the integers
 *
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i != (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
