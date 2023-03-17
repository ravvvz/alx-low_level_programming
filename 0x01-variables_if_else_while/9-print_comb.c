#include <stdio.h>

/**
 * main - prints the single digit numbers separated by comma (,) and space
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;

	for (num = 48; num <= 57; num++)
	{
		putchar(num);

		if (num != 57)
		{
			putchar(',');
			putchar(' ');
		}
		else if (num == 57)
			putchar('\n');
	}

	return (0);
}
