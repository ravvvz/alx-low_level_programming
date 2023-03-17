#include <stdio.h>

/**
 * main - prints the number 0-9
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
		printf("%d", num);
	putchar('\n');

	return (0);
}
