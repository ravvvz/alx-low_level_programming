#include <stdio.h>

/**
 * main - prints the alphabet (lowercase) reversed
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int l;

	for (l = 122; l >= 97; l--)
		putchar(l);
	putchar('\n');

	return (0);
}
