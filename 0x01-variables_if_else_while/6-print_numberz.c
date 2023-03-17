#include <stdio.h>

/**
 * main - print all single digit in base 10
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;

	for (num = 48; num <= 57; num++)
		putchar(num);
	putchar('\n');

	return (0);
}
