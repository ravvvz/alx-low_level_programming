#include <stdio.h>

/**
 * main - prints the alphabet from a-z (lowercase)
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;

	for (a = 97; a <= 122; a++)
		putchar(a);
	putchar('\n');

	return (0);
}
