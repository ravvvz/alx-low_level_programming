#include <stdio.h>

/**
 * main - prints the single digits and characters of hexadecimal number sys
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
		putchar(num + '0');

	for (num = 97; num <= 102; num++)
		putchar(num);
	putchar('\n');

	return (0);
}
