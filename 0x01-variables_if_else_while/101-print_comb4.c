#include <stdio.h>

/**
 * main - prints a combination of 3 digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n1, n2, n3;

	for (n1 = 48; n1 <= 57; n1++)
	{
		for (n2 = 48; n2 <= 57; n2++)
		{
			for (n3 = 48; n3 <= 57; n3++)
			{
				if (n3 > n2 && n2 > n1)
				{
					putchar(n1);
					putchar(n2);
					putchar(n3);

					if (!(n1 == 55 && n2 == 56 && n3 == 57))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
