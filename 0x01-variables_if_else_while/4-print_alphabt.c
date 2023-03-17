#include <stdio.h>

/**
 * main - prints the alphabet a-z exempting q and e
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int l;

	for (l = 97; l <= 122; l++)
	{
		if (l == 'q' || l == 'e')
			continue;
		putchar(l);
	}
	putchar('\n');

	return (0);
}
